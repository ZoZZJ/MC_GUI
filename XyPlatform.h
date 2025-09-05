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
    QButtonGroup *radioGroupDistance;
    QButtonGroup *radioGroupVelocity;


private:
    bool platformEnabled = false;
    MotionController* controller; // 控制器实例

    int m_MoveType = 0; //0=步进 1=持续
    QTimer* KeepMovingTimer = nullptr; // 用于长按按钮触发移动
    QTimer* statusTimer; // 用于定期更新状态

    void setupUI();          // 初始化UI
    void setupConnections(); // 绑定信号槽
    void disableAxis();

private slots:
    void ChangePlatformEnabledStatus();
    void handleMoveX(bool movePositive);
    void handleMoveY(bool movePositive);
    void handleStop(int axisId);       // 停止移动
    void onAxisPositionUpdated(int axisId, float position);
    void onAxisVelocityUpdated(int axisId, float velocity);
    void onAxisAccelerationUpdated(int axisId, float acceleration);
    void updateStatus();     // 更新轴状态
    void on_EnableButton_clicked();
    void on_CommutButton_clicked();
    void onRadioButtonClicked(QAbstractButton *button);
    void on_VelocityPushButton_clicked();
    void on_OpenCardbutton_clicked();
    void on_CloseCardbutton_clicked();
};

#endif // XYPLATFORMUI_H
