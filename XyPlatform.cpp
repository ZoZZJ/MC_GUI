#include "XyPlatform.h"
#include "ui_xyplatformUI.h"
#include <QApplication>
#include <QPushButton>
#include <QPixmap>
#include <QLabel>
#include <QImageReader>
#include <QGridLayout>
#include <QWidget>
#include <QThread>
#include <QDebug>
#include <QButtonGroup>
#include <QTimer>
#include <iostream>
#include <cmath>


XyPlatform::XyPlatform(QWidget *parent)
    : QWidget(parent), xyui(new Ui::XyPlatform),pulsesPerRev(1600),isInitialized(false)
{
    xyui->setupUi(this);

        radioGroupMode = new QButtonGroup(this);
        radioGroupMode->addButton(xyui->moveEndureBtn, 0);
        radioGroupMode->addButton(xyui->moveOnceBtn, 1);

        xyui->MsgTextEdit->setReadOnly(true);  // 设置为只读
        xyui->MsgTextEdit->setWordWrapMode(QTextOption::WordWrap); // 自动换行
        //xyui->MsgTextEdit->setVerticalScrollBar(xyui->MessageSlide);// 设置滚动条


    //初始化
    //initialize(const_cast<char*>("192.168.0.200"),60000,const_cast<char*>("192.168.0.1"),60000);
    // for (int i = 0; i < trapParams.size(); ++i) {
    //     setAxisParameters(i+1, 0.1, 0.1, 0, 0);
    // }
    KeepMovingTimer = new QTimer(this);
    statusTimer = new QTimer(this);
    statusTimer->setInterval(200); // 每100ms更新状态
    connect(statusTimer, &QTimer::timeout, this, &XyPlatform::updateStatus);


    setupConnections();
    xyui->moveEndureBtn->setChecked(true);
    xyui->moveOnceBtn->setChecked(false);
}

XyPlatform::~XyPlatform()
{
}
//使用XY插补需要设置的参数
void XyPlatform::initXYaxis(){

    // === 1. 定义脉冲当量 ===
    const double pulseScale = 5.0 / 1600.0;   // mm/pulse = 0.003125

    // === 2. 设置坐标系参数 ===
    TCrdPrm crdPrm;
    memset(&crdPrm, 0, sizeof(crdPrm));

    crdPrm.dimension = 2;     // 二维坐标系 XY
    crdPrm.profile[0] = 5;    // X 轴号
    crdPrm.profile[1] = 6;    // Y 轴号
    crdPrm.synVelMax = 200;   // 最大合成速度 mm/s
    crdPrm.synAccMax = 1000;  // 最大合成加速度 mm/s²
    crdPrm.evenTime = 0;
    crdPrm.setOriginFlag = 0; // 不自动归零

    int result = g_MultiCard.MC_SetCrdPrm(1, &crdPrm);
    if (result != MC_COM_SUCCESS)
    {
        emit errorOccurred(QString("MC_SetCrdPrm 失败：%1").arg(result));
        return;
    }else{
        addMessage("坐标系已建立");
    }

    setSoftLimits(5,190,0);
    setSoftLimits(6,190,0);

}




void XyPlatform::setupConnections() {

    connect(this, &XyPlatform::errorOccurred, this,&XyPlatform::addMessage);

    //connect(xyui->EnableButton, &QPushButton::pressed, this, &XyPlatform::ChangePlatformEnabledStatus);

    connect(radioGroupMode, QOverload<QAbstractButton*>::of(&QButtonGroup::buttonClicked),
            this, &XyPlatform::onRadioButtonClicked);

    // 长按移动
    // connect(xyui->UpButton, &QPushButton::pressed, [=]() { handleMoveY(true); });
    // connect(xyui->DownButton, &QPushButton::pressed, [=]() { handleMoveY(false); });
    // connect(xyui->LeftButton, &QPushButton::pressed, [=]() { handleMoveX(false); });
    // connect(xyui->RightButton, &QPushButton::pressed, [=]() { handleMoveX(true); });

    // // 松开停止
    // connect(xyui->UpButton, &QPushButton::released, [=]() { handleStop(1); });
    // connect(xyui->DownButton, &QPushButton::released, [=]() { handleStop(1); });
    // connect(xyui->LeftButton, &QPushButton::released, [=]() { handleStop(0); });
    // connect(xyui->RightButton, &QPushButton::released, [=]() { handleStop(0); });

    connect(xyui->VelocityPushButton, &QPushButton::clicked, this, &XyPlatform::on_VelocityPushButton_clicked);
    //connect(xyui->CommutButton, &QPushButton::clicked, this, &XyPlatform::on_CommutButton_clicked);
}

// void XyPlatform::handleMoveX(bool movePositive) {
//     int axis = 0;
//     if (m_MoveType == 1) { // 持续模式
//         // startJog(axis, xyui->vel0->text().toDouble(), movePositive);
//     } else { // 步进模式

//         //double distance = checkedButton->text().toDouble();
//         //moveToAngle(axis, movePositive ? distance : -distance);

//     }
// }

// void XyPlatform::handleMoveY(bool movePositive) {
//     int axis = 1;
//     if (m_MoveType == 1) { // 持续模式
//          //startJog(axis, xyui->vel0->text().toDouble(), movePositive);
//     } else { // 步进模式

//         //double distance = checkedButton->text().toDouble();
//          //moveToAngle(axis, movePositive ? distance : -distance);

//     }
// }

void XyPlatform::handleStop(int axisId) {
     stopMotion(axisId);
}

void XyPlatform::disableAxis() {
    for (int axis = 1; axis < 7; ++axis) {
         disableAxis(axis);
    }
    platformEnabled = false;
}

void XyPlatform::onAxisPositionUpdated(int axisId, float position) {
    if (axisId == 0) {
        xyui->XlcdNumber->display(position);
    } else if (axisId == 1) {
        xyui->YlcdNumber->display(position);
    }
}

void XyPlatform::onAxisVelocityUpdated(int axisId, float velocity) {
    // if (axisId == 0) {
    //     xyui->CurrXVelEdit.setText(QString::number(velocity));
    // } else if (axisId == 1) {
    //     xyui->CurrYVelEdit.setText(QString::number(velocity));
    // }
}


void XyPlatform::onAxisAngleUpdated(int axisId, double Angle){

    double angle360 = std::fmod(Angle, 360.0);
    if (angle360 < 0)
        angle360 += 360.0;

    xyui->LCDt3->display(angle360);

}


void XyPlatform::onAxisAccelerationUpdated(int axisId, float acceleration) {
    // if (axisId == 0) {
    //     xyui->CurrXAccEdit.setText(QString::number(acceleration));
    // } else if (axisId == 1) {
    //     xyui->CurrYAccEdit.setText(QString::number(acceleration));
    // }
}

void XyPlatform::updateStatus() {
    // for (int axis = 5; axis <= 6; ++axis) {
    //     double angle =  getAngle(axis);
    //    // qDebug() << "angle" << angle;
    //     double velocity =  getVelocity(axis);
    //     unsigned long status =  getStatus(axis);
    //     // 加速度需单独计算或从API获取，如果没有直接API，可根据速度变化估算
    //     double acceleration = 0.0; // 假设从速度变化计算，或添加API支持

    //     onAxisPositionUpdated(axis, static_cast<float>(angle));
    //     onAxisVelocityUpdated(axis, static_cast<float>(velocity));
    //     onAxisAccelerationUpdated(axis, static_cast<float>(acceleration));

    //     // 更新状态（示例：检查到位状态）
    //     if (status & AXIS_STATUS_ARRIVE) {
    //        // qDebug() << "轴" << axis << "已到位";
    //     }
    // }
    //For循环会出bug

        int axis1 = 1;
        double angle1 =  getAngle(axis1);
        QString str1 = QString::number(angle1);
        //addMessage(str1);
        double angle3601 = std::fmod(angle1, 360.0);
        if (angle3601 < 0)
            angle3601 += 360.0;
        xyui->LCD1->display(angle3601);

        int axis2 = 2;
        double angle2 =  getAngle(axis2);
        QString str2 = QString::number(angle2);
        //addMessage(str2);
        double angle3602 = std::fmod(angle2, 360.0);
        if (angle3602 < 0)
            angle3602 += 360.0;
        xyui->LCD2->display(angle3602);

        int axis3 = 3;
        double angle =  getAngle(axis3);
        QString str = QString::number(angle);
       // addMessage(str);
        double angle360 = std::fmod(angle, 360.0);
        if (angle360 < 0)
            angle360 += 360.0;
        xyui->LCDt3->display(angle360);

        int axis4 = 4;
        double angle4 =  getAngle(axis4);
        QString str4 = QString::number(angle4);
        //addMessage(str4);
        double angle3604 = std::fmod(angle4, 360.0);
        if (angle3604 < 0)
            angle3604 += 360.0;
        xyui->LCDt4->display(angle3604);


        int axis5 = 5;
        double angle5 =  getAngle(axis5);

        int distanceX_mm = angle5 * (XYDaoCheng/ 360.0);
        xyui->XlcdNumber->display(distanceX_mm);

        // QString str5 = QString::number(distanceX_mm);
        // addMessage(str5);


        int axis6 = 6;
        double angle6 =  getAngle(axis6);

        int distanceY_mm = angle6 * (XYDaoCheng / 360.0);
        xyui->YlcdNumber->display(distanceY_mm);


}

void XyPlatform::on_VelocityPushButton_clicked() {
    double velocity = xyui->VelocitySpinBox->value();
    int axis = xyui->VelAxisChooseBox->value();
    //设置速度为ui显示的值
}


void XyPlatform::on_CommutButton_clicked() {
    // 交换轴位置（示例：交换轴0和轴1的位置）
    double posX =  getAngle(5);
    double posY =  getAngle(6);
     moveToAngle(0, posY, 5.0);
     moveToAngle(1, posX, 5.0);
}

void XyPlatform::onRadioButtonClicked(QAbstractButton *button) {
   if (radioGroupMode->buttons().contains(button)) {
        m_MoveType = radioGroupMode->checkedId(); // 0:步进, 1:持续
    }
}

void XyPlatform::ChangePlatformEnabledStatus() {
    // if (platformEnabled) {
    //     disableAxis();
    // } else {
    //     for (int axis = 0; axis < 2; ++axis) {
    //          enableAxis(axis);
    //     }
    //     platformEnabled = true;
    //     xyui->EnableButton->setText("失能");
    // }
}

void XyPlatform::on_OpenCardbutton_clicked()
{
    statusTimer->start();
    //int iRes = 0;
    g_MultiCard.MC_StartDebugLog(0);
    //iRes = g_MultiCard.MC_Open(1, const_cast<char*>("192.168.0.200"),60000,const_cast<char*>("192.168.0.1"),60000);

    initialize(const_cast<char*>("192.168.0.200"),60000,const_cast<char*>("192.168.0.1"),60000);
    for (int i = 0; i < trapParams.size(); ++i) {
        setAxisParameters(i+1, 0.1, 0.1, 10, 0);
    }


    if(!isInitialized)
    {
        QMessageBox::warning(this, "初始化失败", "无法连接控制卡，请检查网络和配置！");
    }
    else
    {
        g_MultiCard.MC_Reset();
        qDebug()<<"初始化成功"<<endl;
         QMessageBox::information(this, "初始化成功", "已连接控制卡！");

        //OnCbnSelchangeCombo1();
    }
}


void XyPlatform::on_CloseCardbutton_clicked()
{
    statusTimer->stop();   // 先停一切
    g_MultiCard.MC_Close();
     qDebug()<<"关闭板卡成功"<<endl;
}

/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------------------------*/
//以下是XyPlatform的部分函数
// 初始化控制卡
bool XyPlatform::initialize(const std::string& pcIP, unsigned short pcPort,
                                  const std::string& g_MultiCardIP, unsigned short g_MultiCardPort) {

    //if (g_MultiCard) return false;

   //QMutexLocker locker(&mutex);

    // 安全截断 IP 字符串到 19 字节
    char pcEthernetIP[20] = {0};
    char g_MultiCardEthernetIP[20] = {0};
    std::strncpy(pcEthernetIP, pcIP.c_str(), sizeof(pcEthernetIP) - 1);
    std::strncpy(g_MultiCardEthernetIP, g_MultiCardIP.c_str(), sizeof(g_MultiCardEthernetIP) - 1);
    //打开控制卡
    int result = g_MultiCard.MC_Open(1, pcEthernetIP, pcPort, g_MultiCardEthernetIP, g_MultiCardPort);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("控制卡连接失败，错误码：%1").arg(result));
        return false;
    }

    // 重置控制卡
    result = g_MultiCard.MC_Reset();
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("控制卡重置失败，错误码：%1").arg(result));
        g_MultiCard.MC_Close();
        return false;
    }

    // 初始化八个轴，禁用编码器（开环控制）
    for (int axis = 1; axis <= 6; ++axis) {
        g_MultiCard.MC_EncOff(axis);
    }

    // 上电后自动复位所有轴
    for (int axis = 1; axis <= 2; ++axis) {
        //homeAxis(axis, false, 1.0, 1.0, 0.1);
    }
    trapParams.resize(6); // 初始化8个轴参数

    initXYaxis();

    isInitialized = true;
    return true;
}


void XyPlatform::setAxisParameters(int axis, double acc, double dec, double velStart, short smoothTime) {
   //QMutexLocker locker(&mutex);
    // if (!checkAxisValid(axis)) {
    //     emit errorOccurred(QString("无效轴号：%1").arg(axis));
    //     qDebug() << "无效轴号："<<axis<<endl;
    //     return;
    // }

    trapParams[axis-1].acc = acc;
    trapParams[axis-1].dec = dec;
    trapParams[axis-1].velStart = velStart;
    trapParams[axis-1].smoothTime = smoothTime;

    int result = g_MultiCard.MC_SetTrapPrm(axis, &trapParams[axis-1]);

    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1参数设置失败，错误码：%2").arg(axis).arg(result));
    }
}

void XyPlatform::setPulsesPerRev(int pulses) {
   //QMutexLocker locker(&mutex);
    if (pulses <= 0) {
        emit errorOccurred("每圈脉冲数必须大于0");
        return;
    }
    pulsesPerRev = pulses;
}

void XyPlatform::enableAxis(int axis) {
   //QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        qDebug() << "无效轴号："<<axis<<endl;

        return;
    }

    int result = g_MultiCard.MC_AxisOn(axis);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1使能失败，错误码：%2").arg(axis).arg(result));
    }
}

void XyPlatform::disableAxis(int axis) {
   //QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        qDebug() << "无效轴号："<<axis<<endl;
        return;
    }

    int result = g_MultiCard.MC_AxisOff(axis);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1禁用失败，错误码：%2").arg(axis).arg(result));
    }
}

void XyPlatform::setSoftLimits(int axis, double positiveDistance, double negativeDistance) {


    double PositiveAngle = positiveDistance*(360.0/XYDaoCheng);
    double NegativeAngle = negativeDistance*(360.0/XYDaoCheng);

    long positivePulses = angleToPulses(PositiveAngle);
    long negativePulses = angleToPulses(NegativeAngle);
    int result = g_MultiCard.MC_SetSoftLimit(axis, positivePulses, negativePulses);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1软限位设置失败，错误码：%2").arg(axis).arg(result));
    }
}

void XyPlatform::setHardLimits(int axis, short posIOIndex, short negIOIndex) {
   //QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        qDebug() << "无效轴号："<<axis<<endl;
        return;
    }

    int result = g_MultiCard.MC_SetHardLimP(axis, MC_LIMIT_POSITIVE, 0, posIOIndex);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1正硬限位设置失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_SetHardLimN(axis, MC_LIMIT_NEGATIVE, 0, negIOIndex);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1负硬限位设置失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_LmtsOn(axis, MC_LIMIT_POSITIVE);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1正限位启用失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_LmtsOn(axis, MC_LIMIT_NEGATIVE);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1负限位启用失败，错误码：%2").arg(axis).arg(result));
    }
}

void XyPlatform::enableEmergencyStop() {
   //QMutexLocker locker(&mutex);
    int result = g_MultiCard.MC_EStopOnOff(1);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("启用紧急停止失败，错误码：%1").arg(result));
    }
}

void XyPlatform::disableEmergencyStop() {
   //QMutexLocker locker(&mutex);
    int result = g_MultiCard.MC_EStopOnOff(0);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("禁用紧急停止失败，错误码：%1").arg(result));
    }
}

void XyPlatform::homeAxis(int axis, bool positiveDir, double rapidVel, double locatVel, double acc) {

   // stopMotion(3);
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


    int result = g_MultiCard.MC_HomeSetPrm(axis, &homePrm);
    //result = g_MultiCard.MC_HomeStop(axis); // 先停止可能的回零
    result = g_MultiCard.MC_HomeStart(axis);

}

void XyPlatform::stopHome(int axis) {

    int result = g_MultiCard.MC_HomeStop(axis);
    if (result != MC_COM_SUCCESS) {
        //emit errorOccurred(QString("轴%1停止回零失败，错误码：%2").arg(axis).arg(result));
    }
}

void XyPlatform::moveToAngle(int axis, double angle, double velocity) {
   //QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        qDebug() << "无效轴号："<<axis<<endl;
        return;
    }

    long pulses = angleToPulses(angle);


    int result = g_MultiCard.MC_PrfTrap(axis); // 设置点位运动模式
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1设置点位模式失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_SetTrapPrm(axis , &trapParams[axis-1]);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1设置运动参数失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_SetPos(axis , pulses);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1设置目标角度失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_SetVel(axis , velocity);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1设置速度失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_Update(0X0001 << (axis-1));
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1运动启动失败，错误码：%2").arg(axis).arg(result));
    }
}

void XyPlatform::startJog(int axis, double velocity, bool forward) {
   //QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        return;
    }

    TJogPrm jogPrm;
    jogPrm.dAcc = trapParams[axis-1].acc;
    jogPrm.dDec = trapParams[axis-1].dec;
    jogPrm.dSmooth = 0;

    int result = g_MultiCard.MC_PrfJog(axis);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1Jog模式启动失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_SetJogPrm(axis, &jogPrm);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1Jog参数设置失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_SetVel(axis, forward ? velocity : -velocity);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1速度设置失败，错误码：%2").arg(axis).arg(result));
        return;
    }

    result = g_MultiCard.MC_Update(0X0001 << (axis-1));
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1Jog运动启动失败，错误码：%2").arg(axis).arg(result));
    }
}

void XyPlatform::stopMotion(int axis) {
   //QMutexLocker locker(&mutex);
    if (!checkAxisValid(axis)) {
        emit errorOccurred(QString("无效轴号：%1").arg(axis));
        qDebug() << "无效轴号："<<axis<<endl;
        return;
    }

    int result = g_MultiCard.MC_Stop(0XFFFF, 0XFFFF);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1停止失败，错误码：%2").arg(axis).arg(result));
    }
}

void XyPlatform::moveToPosition(long PulseX, long PulseY, double velocity, double acc) {
    // === 2. 设置坐标系参数 ===
    TCrdPrm crdPrm;
    memset(&crdPrm, 0, sizeof(crdPrm));

    crdPrm.dimension = 2;     // 二维坐标系 XY
    crdPrm.profile[0] = 5;    // X 轴号
    crdPrm.profile[1] = 6;    // Y 轴号
    crdPrm.synVelMax = 200;   // 最大合成速度 mm/s
    crdPrm.synAccMax = 1000;  // 最大合成加速度 mm/s²
    crdPrm.evenTime = 0;
    crdPrm.setOriginFlag = 1; // 不自动归零

    crdPrm.originPos[0] = 0;
    crdPrm.originPos[1] = 0;
    crdPrm.originPos[2] = 0;

    int result = g_MultiCard.MC_SetCrdPrm(1, &crdPrm);
    if (result != MC_COM_SUCCESS)
    {
        emit errorOccurred(QString("MC_SetCrdPrm 失败：%1").arg(result));
        return;
    }

    result = g_MultiCard.MC_CrdClear(1, 0);
    if (result != MC_COM_SUCCESS) {
       // emit errorOccurred(QString("清空插补缓冲区失败，错误码：%1").arg(result));
        return;
    }

    // 移动到目标位置  卡号 x位置 y位置 速度 加速度
    result = g_MultiCard.MC_LnXYG0(1, PulseX, PulseY, velocity, acc); // 终点速度0
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("设置插补运动失败，错误码：%1").arg(result));
        return;
    }
    result = g_MultiCard.MC_CrdData(1, NULL, 0);
    if(result != 0){
        qDebug() << "MC_CrdData failed:" << result;
        return;
    }
    // 启动坐标系运动
    result = g_MultiCard.MC_CrdStart(1, 0);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("启动插补运动失败，错误码：%1").arg(result));
        return;
    }
}

double XyPlatform::getAngle(int axis) {

    double pulses;
    int result = g_MultiCard.MC_GetPrfPos(axis, &pulses);

    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1获取位置失败，错误码：%2").arg(axis).arg(result));
        return 0.0;
    }

    return pulsesToAngle(pulses);
}

double XyPlatform::getVelocity(int axis) {
   //QMutexLocker locker(&mutex);
    // if (!checkAxisValid(axis)) {
    //     emit errorOccurred(QString("无效轴号：%1").arg(axis));
    //     qDebug() << "无效轴号："<<axis<<endl;
    //     return 0.0;
    // }

    double velocity;
    int result = g_MultiCard.MC_GetPrfVel(axis, &velocity);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1获取速度失败，错误码：%2").arg(axis).arg(result));
        return 0.0;
    }

    return velocity;
}

unsigned long XyPlatform::getStatus(int axis) {

    // if (!checkAxisValid(axis)) {
    //     emit errorOccurred(QString("无效轴号：%1").arg(axis));
    //     qDebug() << "无效轴号："<<axis<<endl;
    //     return 0;
    // }

    TAllSysStatusDataSX statusData;
    int result = g_MultiCard.MC_GetAllSysStatusSX(&statusData);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("轴%1获取状态失败，错误码：%2").arg(axis).arg(result));
        return 0;
    }

    return statusData.lAxisStatus[axis];
}

bool XyPlatform::isEmergencyStopActive() {

    short estopStatus;
    int result = g_MultiCard.MC_EStopGetSts(&estopStatus);
    if (result != MC_COM_SUCCESS) {
        emit errorOccurred(QString("获取紧急停止状态失败，错误码：%1").arg(result));
        return false;
    }
    return (estopStatus != 0);
}

long XyPlatform::angleToPulses(double angle) const {
    return static_cast<long>(angle / 360.0 * pulsesPerRev);
}

double XyPlatform::pulsesToAngle(double pulses) const {
    return static_cast<double>(pulses) / pulsesPerRev * 360.0;
}

bool XyPlatform::checkAxisValid(int axis) const {
    return (axis >= 1 && axis <= 6);
}

void XyPlatform::addMessage(const QString &message)
{
    QString time = QDateTime::currentDateTime().toString("hh:mm:ss");
    QString msg  = time + " - " + message;

    // 1️⃣ 打到界面
    xyui->MsgTextEdit->append(msg);

    // 2️⃣ 打到终端 / Qt Creator / 控制台
    qDebug().noquote() << msg;
}



bool XyPlatform::testMotorAxis3() {
//Y3接的是ENA- Y2接的是ENA+
    // 控制卡初始化（替换为实际IP和端口）
    if (!isInitialized) {
        qDebug() << "控制卡未初始化 请先初始化";
        return false;
    }

    static int targetAngle = 360;
    targetAngle += 360;
    int targetPulse = angleToPulses(targetAngle);

    int iRes = 0;
    int iAxisNum = 3;

    TTrapPrm TrapPrm;

    TrapPrm.acc = 0.1;
    TrapPrm.dec = 0.1;
    TrapPrm.smoothTime = 0;
    TrapPrm.velStart = 0;

    iRes = g_MultiCard.MC_PrfTrap(iAxisNum);
    iRes += g_MultiCard.MC_SetTrapPrm(iAxisNum,&TrapPrm);

    iRes += g_MultiCard.MC_SetPos(iAxisNum,targetPulse);
    iRes = g_MultiCard.MC_SetVel(iAxisNum,5);

    iRes += g_MultiCard.MC_Update(0X0001 << (iAxisNum-1));

    return true;
}


bool XyPlatform::testMotorAxis3Jog() {
    //Y3接的是ENA- Y2接的是ENA+
    // 控制卡初始化（替换为实际IP和端口）
    if (!isInitialized) {
        qDebug() << "控制卡未初始化 请先初始化";
        return false;
    }

    int iRes = 0;
    TJogPrm m_JogPrm;

    int iAxisNum = 3;

    m_JogPrm.dAcc = 0.1;
    m_JogPrm.dDec = 0.1;
    m_JogPrm.dSmooth = 0;

    iRes = g_MultiCard.MC_PrfJog(iAxisNum);

    iRes += g_MultiCard.MC_SetJogPrm(iAxisNum,&m_JogPrm);

    iRes += g_MultiCard.MC_SetVel(iAxisNum,-20);

    iRes += g_MultiCard.MC_Update(0X0001 << (iAxisNum-1));

    if(0 == iRes)
    {
        addMessage("负向连续移动......\r\n");
    }
}


void XyPlatform::on_StopMotionSoftButton_clicked()
{
    stopMotion(3);
}

void XyPlatform::on_RightButton_1_clicked()
{
    double Angle = -1;
    Angle = getAngle(1);
    Angle += xyui->CurrXVelEdit_1->text().toDouble();
    moveToAngle(1,Angle,10);
}


void XyPlatform::on_LeftButton_1_clicked()
{
    double Angle = -1;
    Angle = getAngle(1);
    Angle -= xyui->CurrXVelEdit_1->text().toDouble();
    moveToAngle(1,Angle,10);
}

void XyPlatform::on_RightButton_2_clicked()
{
    double Angle = -1;
    Angle = getAngle(2);
    Angle += xyui->CurrXVelEdit_2->text().toDouble();
    moveToAngle(2,Angle,10);
}


void XyPlatform::on_LeftButton_2_clicked()
{
    double Angle = -1;
    Angle = getAngle(2);
    Angle -= xyui->CurrXVelEdit_2->text().toDouble();
    moveToAngle(2,Angle,10);
}


void XyPlatform::on_RightButton_3_clicked()
{
    double Angle = -1;
    Angle = getAngle(3);
    Angle += xyui->CurrXVelEdit_3->text().toDouble();
    moveToAngle(3,Angle,10);
}


void XyPlatform::on_LeftButton_3_clicked()
{
    double Angle = -1;
    Angle = getAngle(3);
    Angle -= xyui->CurrXVelEdit_3->text().toDouble();
    moveToAngle(3,Angle,10);
}

void XyPlatform::on_RightButton_4_clicked()
{
    double Angle = -1;
    Angle = getAngle(4);
    Angle += xyui->CurrXVelEdit_4->text().toDouble();
    moveToAngle(4,Angle,10);
}


void XyPlatform::on_LeftButton_4_clicked()
{
    double Angle = -1;
    Angle = getAngle(4);
    Angle -= xyui->CurrXVelEdit_4->text().toDouble();
    moveToAngle(4,Angle,10);
}


void XyPlatform::on_RightButton_clicked()
{
    double Angle = -1;
    Angle = getAngle(5);
    Angle += xyui->MoveDistanceEdit->text().toDouble()*(360.0/XYDaoCheng) ;
    moveToAngle(5,Angle,10);
}


void XyPlatform::on_LeftButton_clicked()
{
    double Angle = -1;
    Angle = getAngle(5);
    Angle -= xyui->MoveDistanceEdit->text().toDouble()*(360.0/XYDaoCheng) ;
    moveToAngle(5,Angle,10);
}


void XyPlatform::on_UpButton_clicked()
{
    double Angle = -1;
    Angle = getAngle(6);
    Angle += xyui->MoveDistanceEdit->text().toDouble()*(360.0/XYDaoCheng) ;
    moveToAngle(6,Angle,10);
}


void XyPlatform::on_DownButton_clicked()
{
    double Angle = -1;
    Angle = getAngle(6);
    Angle -= xyui->MoveDistanceEdit->text().toDouble()*(360.0/XYDaoCheng) ;
    moveToAngle(6,Angle,10);
}


void XyPlatform::on_pushButton_clicked()
{
    //enableAxis(1);
    //enableAxis(2);

    //g_MultiCard.MC_SetDoBit(MC_GPO, 2, 1); // Y2保持高电平
    //g_MultiCard.MC_SetDoBit(MC_GPO, 3, 1); // Y3低电平使能

    //moveToAngle(3,360,5);
    //testMotorAxis3();
    //startJog(3,5,true);

   //moveToPosition(16000,16000);

    homeAxis(3);

    // 按按钮后，两轴同步运动到指定位置抓取样品，然后移动到另一位置后回来
    // long grabPosX = xyui->TargetXposEdit.text().toLong(); // 假设脉冲或角度转换为脉冲
    // long grabPosY = xyui->TargetYposEdit.text().toLong();
    // long releasePosX = 0; // 示例返回位置X
    // long releasePosY = 0; // 示例返回位置Y
    // double velocity = 5.0; // 示例速度
    // double acc = 0.1; // 示例加速度

    // // 移动到抓取位置
    //  .moveToPosition(0, 1, grabPosX, grabPosY, velocity, acc);

    // // 等待到位（示例：轮询状态）
    // while (!( .getStatus(0) & AXIS_STATUS_ARRIVE) || !( .getStatus(1) & AXIS_STATUS_ARRIVE)) {
    //     QThread::msleep(100);
    // }

    // // 抓取样品（假设通过IO控制吸盘）
    // //  .setIO(吸盘IO索引, true); // 需添加IO方法

    // // 移动到释放位置并返回
    //  .moveToPosition(0, 1, releasePosX, releasePosY, velocity, acc);

    // // 等待到位
    // while (!( .getStatus(0) & AXIS_STATUS_ARRIVE) || !( .getStatus(1) & AXIS_STATUS_ARRIVE)) {
    //     QThread::msleep(100);
    // }

    // // 释放样品
    // //  .setIO(吸盘IO索引, false);

    // // 返回原位
    //  .moveToPosition(0, 1, 0, 0, velocity, acc);
}


void XyPlatform::on_LeftButton_9_clicked()
{
    homeAxis(5);
    homeAxis(6);
}


void XyPlatform::on_LeftButton_10_clicked()
{
    //吸盘IO  Y0

    static int cnt  = 0;
    if(cnt == 0) {
        g_MultiCard.MC_SetDoBit(MC_GPO, 1, 1);   // 吸合（拉低）
        cnt = 1;
    }
    else {
        g_MultiCard.MC_SetDoBit(MC_GPO, 1, 0);   // 断开
        cnt = 0;
    }

}


void XyPlatform::on_LeftButton_7_clicked()
{
    static int cnt2  = 0;
    if(cnt2 == 0) {
        g_MultiCard.MC_SetDoBit(MC_GPO, 2, 1);   // 吸合（拉低）
        cnt2 = 1;
    }
    else {
        g_MultiCard.MC_SetDoBit(MC_GPO, 2, 0);   // 断开
        cnt2 = 0;
    }
}

