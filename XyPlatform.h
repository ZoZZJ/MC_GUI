#ifndef XYPLATFORMUI_H
#define XYPLATFORMUI_H
#include <QWidget>
#include <QVBoxLayout>
#include <QRadioButton>
#include <QCheckBox>
#include <QCommandLinkButton>
#include <QDialogButtonBox>
#include <QMessageBox>
#include "MotorController/MotionController.h"
#include <iostream>
#include <QTimer>
#include "GlobalVars.h"

namespace Ui {
class XyPlatform;
}

class XyPlatform : public QWidget
{
    Q_OBJECT

public:
    XyPlatform(QWidget *parent = nullptr);
    ~XyPlatform();

private:
    Ui::XyPlatform *xyui;
    QButtonGroup *radioGroupMode;


private:

    //TAxisHomePrm m_homePrm;   // 回零参数（全局一份）


    bool platformEnabled = false;
    MotionController* controller; // 控制器实例


   // TCrdData LookAheadBuf[FROCAST_LEN];

    int m_MoveType = 0; //0=步进 1=持续
    QTimer* KeepMovingTimer = nullptr; // 用于长按按钮触发移动
    QTimer* statusTimer; // 用于定期更新状态

    void setupUI();          // 初始化UI
    void setupConnections(); // 绑定信号槽
    void disableAxis();

//本应是MotionController实现的代码
private:
    //函数部分
    bool initialize(const std::string& pcIP, unsigned short pcPort,
                    const std::string& cardIP, unsigned short cardPort);

    void initXYaxis();
    // 配置
    void setAxisParameters(int axis, double acc, double dec, double velStart, short smoothTime);
    void setPulsesPerRev(int pulsesPerRev);
    void enableAxis(int axis);
    void disableAxis(int axis);
    void setSoftLimits(int axis, double positiveDegrees, double negativeDegrees);
    void setHardLimits(int axis, short posIOIndex, short negIOIndex);
    void enableEmergencyStop();
    void disableEmergencyStop();
    void homeAxis(int axis, bool positiveDir = 0, double rapidVel = 10, double locatVel = 5, double acc = 0.1);
    void stopHome(int axis);

    // 运动控制

    //专用于4个角度轴
    void moveToAngle(int axis, double angle, double velocity = 10);
    void startJog(int axis, double velocity, bool forward);
    void stopMotion(int axis);
    //专用于XY位置轴
    void moveToPosition(long posX, long posY, double velocity = 20, double acc = 0.2);

    // 状态监控
    double getAngle(int axis);
    double getVelocity(int axis);
    unsigned long getStatus(int axis);
    bool isEmergencyStopActive();
signals:
    void errorOccurred(const QString& errorMsg);
 //变量部分
private:

    std::vector<TTrapPrm> trapParams; // 每个轴的运动参数
    int pulsesPerRev; // 每圈脉冲数
    float XYDaoCheng = 1;
    QMutex mutex; // 线程安全互斥锁
    bool isInitialized; // 初始化状态

    // 辅助方法
    long angleToPulses(double angle) const;
    double pulsesToAngle(double pulses) const;
    bool checkAxisValid(int axis) const;
    bool testMotorAxis3();
    bool testMotorAxis3Jog();

    void addMessage(const QString &message);
//ui的槽
private slots:
    void ChangePlatformEnabledStatus();
    // void handleMoveX(bool movePositive);
    // void handleMoveY(bool movePositive);
    void handleStop(int axisId);       // 停止移动
    void onAxisPositionUpdated(int axisId, float position);
    void onAxisVelocityUpdated(int axisId, float velocity);


    void onAxisAngleUpdated(int axisId, double Angle);

    void onAxisAccelerationUpdated(int axisId, float acceleration);
    void updateStatus();     // 更新轴状态
    void on_CommutButton_clicked();
    void onRadioButtonClicked(QAbstractButton *button);
    void on_VelocityPushButton_clicked();
    void on_OpenCardbutton_clicked();
    void on_CloseCardbutton_clicked();
    void on_StopMotionSoftButton_clicked();
    void on_RightButton_4_clicked();
    void on_LeftButton_4_clicked();
    void on_RightButton_1_clicked();
    void on_LeftButton_1_clicked();
    void on_RightButton_3_clicked();
    void on_LeftButton_3_clicked();
    void on_RightButton_2_clicked();
    void on_LeftButton_2_clicked();
    void on_RightButton_clicked();
    void on_LeftButton_clicked();
    void on_UpButton_clicked();
    void on_DownButton_clicked();
    void on_pushButton_clicked();
    void on_LeftButton_9_clicked();
    void on_LeftButton_10_clicked();
    void on_LeftButton_7_clicked();
};

#endif // XYPLATFORMUI_H
