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

XyPlatform::XyPlatform(QWidget *parent)
    : QWidget(parent), xyui(new Ui::XyPlatform)
{
    xyui->setupUi(this);

    radioGroupDistance = new QButtonGroup(this);
    radioGroupVelocity = new QButtonGroup(this);
    radioGroupMode = new QButtonGroup(this);

    // 添加按钮到组
    radioGroupDistance->addButton(xyui->distance0, 0);
    radioGroupDistance->addButton(xyui->distance1, 1);
    radioGroupDistance->addButton(xyui->distance2, 2);
    radioGroupDistance->addButton(xyui->distance3, 3);

    radioGroupVelocity->addButton(xyui->vel0, 0);
    radioGroupVelocity->addButton(xyui->vel1, 1);
    radioGroupVelocity->addButton(xyui->vel2, 2);

    radioGroupMode->addButton(xyui->moveEndureBtn, 0);
    radioGroupMode->addButton(xyui->moveOnceBtn, 1);

    //controller = new MotionController();

    on_OpenCardbutton_clicked();

    KeepMovingTimer = new QTimer(this);
    statusTimer = new QTimer(this);
    statusTimer->setInterval(100); // 每100ms更新状态
    //connect(statusTimer, &QTimer::timeout, this, &XyPlatform::updateStatus);
    statusTimer->start();

    setupConnections();

    xyui->moveEndureBtn->setChecked(true);
    xyui->moveOnceBtn->setChecked(false);
}

XyPlatform::~XyPlatform()
{
    delete xyui;
}

void XyPlatform::setupConnections() {
    connect(xyui->EnableButton, &QPushButton::pressed, this, &XyPlatform::ChangePlatformEnabledStatus);

    connect(radioGroupVelocity, QOverload<QAbstractButton*>::of(&QButtonGroup::buttonClicked),
            this, &XyPlatform::onRadioButtonClicked);
    connect(radioGroupMode, QOverload<QAbstractButton*>::of(&QButtonGroup::buttonClicked),
            this, &XyPlatform::onRadioButtonClicked);

    // 长按移动
    connect(xyui->UpButton, &QPushButton::pressed, [=]() { handleMoveY(true); });
    connect(xyui->DownButton, &QPushButton::pressed, [=]() { handleMoveY(false); });
    connect(xyui->LeftButton, &QPushButton::pressed, [=]() { handleMoveX(false); });
    connect(xyui->RightButton, &QPushButton::pressed, [=]() { handleMoveX(true); });

    // 松开停止
    connect(xyui->UpButton, &QPushButton::released, [=]() { handleStop(1); });
    connect(xyui->DownButton, &QPushButton::released, [=]() { handleStop(1); });
    connect(xyui->LeftButton, &QPushButton::released, [=]() { handleStop(0); });
    connect(xyui->RightButton, &QPushButton::released, [=]() { handleStop(0); });

    connect(xyui->VelocityPushButton, &QPushButton::clicked, this, &XyPlatform::on_VelocityPushButton_clicked);
    connect(xyui->EnableButton, &QPushButton::clicked, this, &XyPlatform::on_EnableButton_clicked);
    connect(xyui->CommutButton, &QPushButton::clicked, this, &XyPlatform::on_CommutButton_clicked);
}

void XyPlatform::handleMoveX(bool movePositive) {
    int axis = 0;
    if (m_MoveType == 1) { // 持续模式
        controller->startJog(axis, xyui->vel0->text().toDouble(), movePositive);
    } else { // 步进模式
        QAbstractButton *checkedButton = radioGroupDistance->checkedButton();
        if (checkedButton) {
            double distance = checkedButton->text().toDouble();
            controller->moveToAngle(axis, movePositive ? distance : -distance, xyui->vel0->text().toDouble());
        }
    }
}

void XyPlatform::handleMoveY(bool movePositive) {
    int axis = 1;
    if (m_MoveType == 1) { // 持续模式
        controller->startJog(axis, xyui->vel0->text().toDouble(), movePositive);
    } else { // 步进模式
        QAbstractButton *checkedButton = radioGroupDistance->checkedButton();
        if (checkedButton) {
            double distance = checkedButton->text().toDouble();
            controller->moveToAngle(axis, movePositive ? distance : -distance, xyui->vel0->text().toDouble());
        }
    }
}

void XyPlatform::handleStop(int axisId) {
    controller->stopMotion(axisId);
}

void XyPlatform::disableAxis() {
    for (int axis = 0; axis < 2; ++axis) {
        controller->disableAxis(axis);
    }
    platformEnabled = false;
    xyui->EnableButton->setText("使能");
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
    //     xyui->CurrXVelEdit->setText(QString::number(velocity));
    // } else if (axisId == 1) {
    //     xyui->CurrYVelEdit->setText(QString::number(velocity));
    // }
}

void XyPlatform::onAxisAccelerationUpdated(int axisId, float acceleration) {
    // if (axisId == 0) {
    //     xyui->CurrXAccEdit->setText(QString::number(acceleration));
    // } else if (axisId == 1) {
    //     xyui->CurrYAccEdit->setText(QString::number(acceleration));
    // }
}

void XyPlatform::updateStatus() {
    for (int axis = 0; axis < 2; ++axis) {
        double angle = controller->getAngle(axis);
        double velocity = controller->getVelocity(axis);
        unsigned long status = controller->getStatus(axis);
        // 加速度需单独计算或从API获取，如果没有直接API，可根据速度变化估算
        double acceleration = 0.0; // 假设从速度变化计算，或添加API支持

        onAxisPositionUpdated(axis, static_cast<float>(angle));
        onAxisVelocityUpdated(axis, static_cast<float>(velocity));
        onAxisAccelerationUpdated(axis, static_cast<float>(acceleration));

        // 更新状态（示例：检查到位状态）
        if (status & AXIS_STATUS_ARRIVE) {
            qDebug() << "轴" << axis << "已到位";
        }
    }
}

void XyPlatform::on_VelocityPushButton_clicked() {
    double velocity = xyui->VelocitySpinBox->value();
    int axis = xyui->VelAxisChooseBox->value();
    controller->startJog(axis, velocity, true); // 示例：正向Jog
}

void XyPlatform::on_EnableButton_clicked() {
    // 按按钮后，两轴同步运动到指定位置抓取样品，然后移动到另一位置后回来
    // long grabPosX = xyui->TargetXposEdit->text().toLong(); // 假设脉冲或角度转换为脉冲
    // long grabPosY = xyui->TargetYposEdit->text().toLong();
    // long releasePosX = 0; // 示例返回位置X
    // long releasePosY = 0; // 示例返回位置Y
    // double velocity = 5.0; // 示例速度
    // double acc = 0.1; // 示例加速度

    // // 移动到抓取位置
    // controller->moveToPosition(0, 1, grabPosX, grabPosY, velocity, acc);

    // // 等待到位（示例：轮询状态）
    // while (!(controller->getStatus(0) & AXIS_STATUS_ARRIVE) || !(controller->getStatus(1) & AXIS_STATUS_ARRIVE)) {
    //     QThread::msleep(100);
    // }

    // // 抓取样品（假设通过IO控制吸盘）
    // // controller->setIO(吸盘IO索引, true); // 需添加IO方法

    // // 移动到释放位置并返回
    // controller->moveToPosition(0, 1, releasePosX, releasePosY, velocity, acc);

    // // 等待到位
    // while (!(controller->getStatus(0) & AXIS_STATUS_ARRIVE) || !(controller->getStatus(1) & AXIS_STATUS_ARRIVE)) {
    //     QThread::msleep(100);
    // }

    // // 释放样品
    // // controller->setIO(吸盘IO索引, false);

    // // 返回原位
    // controller->moveToPosition(0, 1, 0, 0, velocity, acc);
}

void XyPlatform::on_CommutButton_clicked() {
    // 交换轴位置（示例：交换轴0和轴1的位置）
    double posX = controller->getAngle(0);
    double posY = controller->getAngle(1);
    controller->moveToAngle(0, posY, 5.0);
    controller->moveToAngle(1, posX, 5.0);
}

void XyPlatform::onRadioButtonClicked(QAbstractButton *button) {
    if (radioGroupVelocity->buttons().contains(button)) {
        double velocity = button->text().toDouble();
        xyui->VelAxisChooseBox->setValue(velocity);
    } else if (radioGroupMode->buttons().contains(button)) {
        m_MoveType = radioGroupMode->checkedId(); // 0:步进, 1:持续
    }
}

void XyPlatform::ChangePlatformEnabledStatus() {
    if (platformEnabled) {
        disableAxis();
    } else {
        for (int axis = 0; axis < 2; ++axis) {
            controller->enableAxis(axis);
        }
        platformEnabled = true;
        xyui->EnableButton->setText("失能");
    }
}

void XyPlatform::on_OpenCardbutton_clicked()
{
    int iRes = 0;
    g_MultiCard.MC_StartDebugLog(0);
    iRes = g_MultiCard.MC_Open(1, const_cast<char*>("192.168.0.200"),60000,const_cast<char*>("192.168.0.1"),60000);

    if(iRes)
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
    g_MultiCard.MC_Close();
     qDebug()<<"关闭板卡成功"<<endl;
}

