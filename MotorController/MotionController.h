#ifndef MOTIONCONTROLLER_H
#define MOTIONCONTROLLER_H

#include "MultiCardCPP.h"
#include <QObject>
#include <QMutex>
#include <vector>
#include <string>

class MotionController : public QObject {
    Q_OBJECT


public:
    explicit MotionController(QObject *parent = nullptr);
    ~MotionController();

    // 初始化
    bool initialize(const std::string& pcIP, unsigned short pcPort,
                    const std::string& cardIP, unsigned short cardPort);

    // 配置
    void setAxisParameters(int axis, double acc, double dec, double velStart, short smoothTime);
    void setPulsesPerRev(int pulsesPerRev);
    void enableAxis(int axis);
    void disableAxis(int axis);
    void setSoftLimits(int axis, double positiveDegrees, double negativeDegrees);
    void setHardLimits(int axis, short posIOIndex, short negIOIndex);
    void enableEmergencyStop();
    void disableEmergencyStop();
    void homeAxis(int axis, bool positiveDir, double rapidVel, double locatVel, double acc);
    void stopHome(int axis);

    // 运动控制
    void moveToAngle(int axis, double angle, double velocity);
    void startJog(int axis, double velocity, bool forward);
    void stopMotion(int axis);
    void moveToPosition(int axis1, int axis2, long pos1, long pos2, double velocity, double acc);

    // 状态监控
    double getAngle(int axis);
    double getVelocity(int axis);
    unsigned long getStatus(int axis);
    bool isEmergencyStopActive();

signals:
    void errorOccurred(const QString& errorMsg);

private:
    MultiCard* card; // 控制卡对象
    std::vector<TTrapPrm> trapParams; // 每个轴的运动参数
    int pulsesPerRev; // 每圈脉冲数
    QMutex mutex; // 线程安全互斥锁
    bool isInitialized; // 初始化状态

    // 辅助方法
    long angleToPulses(double angle) const;
    double pulsesToAngle(long pulses) const;
    bool checkAxisValid(int axis) const;
};

#endif // MOTIONCONTROLLER_H
