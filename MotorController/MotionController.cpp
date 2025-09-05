#include "MotionController.h"
#include <QDebug>
#include "MultiCardCPP.h"
#include <memory>
#include <algorithm>

MotionController::MotionController(QObject *parent)
    : QObject(parent),
    pulsesPerRev(1600),
    isInitialized(false),
    card(nullptr)  // 初始化为空,板卡要上电接好才能初始化
{
    trapParams.resize(8); // 初始化8个轴参数
}

MotionController::~MotionController() {
    if (card && isInitialized) {
        card->MC_Close();
    }
    // card 是 unique_ptr 或手动指针，这里不用 delete（unique_ptr 自动释放）
}

// 初始化控制卡
bool MotionController::initialize(const std::string& pcIP, unsigned short pcPort,
                                  const std::string& cardIP, unsigned short cardPort) {

    try {
        //testStackAllocation();
        card = std::make_unique<MultiCard>();
         qDebug() << "控制分配内存成功";
    } catch (...) {
        qDebug() << "控制卡初始化失败";
        return false;
    }

    if (!card) return false;

    QMutexLocker locker(&mutex);

    // 安全截断 IP 字符串到 19 字节
    char pcEthernetIP[20] = {0};
    char cardEthernetIP[20] = {0};
    std::strncpy(pcEthernetIP, pcIP.c_str(), sizeof(pcEthernetIP) - 1);
    std::strncpy(cardEthernetIP, cardIP.c_str(), sizeof(cardEthernetIP) - 1);

    int result = card->MC_Open(1, pcEthernetIP, pcPort, cardEthernetIP, cardPort);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("控制卡连接失败，错误码：%1").arg(result));
        return false;
    }

    // 重置控制卡
    result = card->MC_Reset();
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("控制卡重置失败，错误码：%1").arg(result));
        card->MC_Close();
        return false;
    }

    // 初始化八个轴，禁用编码器（开环控制）
    for (int axis = 0; axis < 8; ++axis) {
        card->MC_EncOff(axis + 1);
    }

    // 上电后自动复位所有轴
    for (int axis = 0; axis < 2; ++axis) {
        //homeAxis(axis, false, 1.0, 1.0, 0.1);
    }

    isInitialized = true;
    return true;
}


void MotionController::setAxisParameters(int axis, double acc, double dec, double velStart, short smoothTime) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    trapParams[axis].acc = acc;
    trapParams[axis].dec = dec;
    trapParams[axis].velStart = velStart;
    trapParams[axis].smoothTime = smoothTime;

    int result = card->MC_SetTrapPrm(axis + 1, &trapParams[axis]);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1参数设置失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::setPulsesPerRev(int pulses) {
    QMutexLocker locker(&mutex);
    if (pulses <= 0) {
        emit errorOccurred("每圈脉冲数必须大于0");
        return;
    }
    pulsesPerRev = pulses;
}

void MotionController::enableAxis(int axis) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    int result = card->MC_AxisOn(axis + 1);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1使能失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::disableAxis(int axis) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    int result = card->MC_AxisOff(axis + 1);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1禁用失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::setSoftLimits(int axis, double positiveDegrees, double negativeDegrees) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    long positivePulses = angleToPulses(positiveDegrees);
    long negativePulses = angleToPulses(negativeDegrees);
    int result = card->MC_SetSoftLimit(axis + 1, positivePulses, negativePulses);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1软限位设置失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::setHardLimits(int axis, short posIOIndex, short negIOIndex) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    int result = card->MC_SetHardLimP(axis + 1, MC_LIMIT_POSITIVE, 0, posIOIndex);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1正硬限位设置失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_SetHardLimN(axis + 1, MC_LIMIT_NEGATIVE, 0, negIOIndex);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1负硬限位设置失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_LmtsOn(axis + 1, MC_LIMIT_POSITIVE);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1正限位启用失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_LmtsOn(axis + 1, MC_LIMIT_NEGATIVE);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1负限位启用失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::enableEmergencyStop() {
    QMutexLocker locker(&mutex);
    int result = card->MC_EStopOnOff(1);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("启用紧急停止失败，错误码：%1").arg(result));
    }
}

void MotionController::disableEmergencyStop() {
    QMutexLocker locker(&mutex);
    int result = card->MC_EStopOnOff(0);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("禁用紧急停止失败，错误码：%1").arg(result));
    }
}

void MotionController::homeAxis(int axis, bool positiveDir, double rapidVel, double locatVel, double acc) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    TAxisHomePrm homePrm;
    homePrm.nHomeMode = 1; // HOME回原点
    homePrm.nHomeDir = positiveDir ? 1 : 0; // 1:正向，0:负向
    homePrm.lOffset = 0; // 无偏移
    homePrm.dHomeRapidVel = rapidVel; // 快移速度
    homePrm.dHomeLocatVel = locatVel; // 定位速度
    homePrm.dHomeIndexVel = locatVel; // Index速度（与定位速度一致）
    homePrm.dHomeAcc = acc; // 加速度
    homePrm.ulHomeIndexDis = 0; // Index最大距离
    homePrm.ulHomeBackDis = 0; // 回退距离
    homePrm.nDelayTimeBeforeZero = 1000; // 清零前延时
    homePrm.ulHomeMaxDis = 0; // 最大寻找范围

    int result = card->MC_HomeSetPrm(axis + 1, &homePrm);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1回零参数设置失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_HomeStop(axis + 1); // 先停止可能的回零
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1停止回零失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_HomeStart(axis + 1);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1启动回零失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::stopHome(int axis) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    int result = card->MC_HomeStop(axis + 1);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1停止回零失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::moveToAngle(int axis, double angle, double velocity) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    long pulses = angleToPulses(angle);
    int result = card->MC_PrfTrap(axis + 1); // 设置点位运动模式
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1设置点位模式失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_SetTrapPrm(axis + 1, &trapParams[axis]);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1设置运动参数失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_SetPos(axis + 1, pulses);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1设置目标角度失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_SetVel(axis + 1, velocity);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1设置速度失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_Update(1 << axis);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1运动启动失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::startJog(int axis, double velocity, bool forward) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    TJogPrm jogPrm;
    jogPrm.dAcc = trapParams[axis].acc;
    jogPrm.dDec = trapParams[axis].dec;
    jogPrm.dSmooth = 0.1;

    int result = card->MC_PrfJog(axis + 1);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1Jog模式启动失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_SetJogPrm(axis + 1, &jogPrm);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1Jog参数设置失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_SetVel(axis + 1, forward ? velocity : -velocity);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1速度设置失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = card->MC_Update(1 << axis);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1Jog运动启动失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::stopMotion(int axis) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    int result = card->MC_Stop(1 << axis, 1 << axis);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1停止失败，错误码：%2").arg(axis).arg(result));
    }
}

void MotionController::moveToPosition(int axis1, int axis2, long pos1, long pos2, double velocity, double acc) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis1) || !checkAxisValid(axis2)) {
        emit errorOccurred(QString("无效轴号：轴1=%1, 轴2=%2").arg(axis1).arg(axis2));
        return;
    }

    // 设置坐标系参数（两轴插补）
    TCrdPrm crdPrm;
    crdPrm.dimension = 2; // 两维
    crdPrm.profile[0] = axis1 + 1; // 轴1
    crdPrm.profile[1] = axis2 + 1; // 轴2
    crdPrm.synVelMax = velocity;
    crdPrm.synAccMax = acc;
    crdPrm.evenTime = 0;
    crdPrm.setOriginFlag = 0; // 使用当前位置为原点

    int result = card->MC_SetCrdPrm(1, &crdPrm); // 坐标系1
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("设置坐标系失败，错误码：%1").arg(result));
        return;
    }

    // 清空缓冲区
    result = card->MC_CrdClear(1, 0);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("清空插补缓冲区失败，错误码：%1").arg(result));
        return;
    }

    // 移动到目标位置  卡号 x位置 y位置 速度 加速度
    //int MC_LnXY(short nCrdNum,long x,long y,double synVel,double synAcc,double velEnd=0,short FifoIndex=0,long segNum = 0);
    result = card->MC_LnXY(1, pos1, pos2, velocity, acc, 0, 0, 0); // 终点速度0
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("设置插补运动失败，错误码：%1").arg(result));
        return;
    }

    // 启动坐标系运动
    result = card->MC_CrdStart(1, 0);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("启动插补运动失败，错误码：%1").arg(result));
        return;
    }
}

double MotionController::getAngle(int axis) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return 0.0;
    }

    double pulses;
    int result = card->MC_GetPrfPos(axis + 1, &pulses);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1获取位置失败，错误码：%2").arg(axis).arg(result));
        return 0.0;
    }

    return pulsesToAngle(pulses);
}

double MotionController::getVelocity(int axis) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return 0.0;
    }

    double velocity;
    int result = card->MC_GetPrfVel(axis + 1, &velocity);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1获取速度失败，错误码：%2").arg(axis).arg(result));
        return 0.0;
    }

    return velocity;
}

unsigned long MotionController::getStatus(int axis) {
    QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return 0;
    }

    TAllSysStatusDataSX statusData;
    int result = card->MC_GetAllSysStatusSX(&statusData);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1获取状态失败，错误码：%2").arg(axis).arg(result));
        return 0;
    }

    return statusData.lAxisStatus[axis];
}

bool MotionController::isEmergencyStopActive() {
    QMutexLocker locker(&mutex);
    short estopStatus;
    int result = card->MC_EStopGetSts(&estopStatus);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("获取紧急停止状态失败，错误码：%1").arg(result));
        return false;
    }
    return (estopStatus != 0);
}

long MotionController::angleToPulses(double angle) const {
    return static_cast<long>(angle / 360.0 * pulsesPerRev);
}

double MotionController::pulsesToAngle(double pulses) const {
    return static_cast<double>(pulses) / pulsesPerRev * 360.0;
}

bool MotionController::checkAxisValid(int axis) const {
    return (axis >= 0 && axis < 8);
}

void MotionController::testStackAllocation() {
    try {
        MultiCard card; // 栈上对象
        std::cout << "success" << std::endl;
    } catch (...) {
        std::cout << "fail" << std::endl;
    }
}
