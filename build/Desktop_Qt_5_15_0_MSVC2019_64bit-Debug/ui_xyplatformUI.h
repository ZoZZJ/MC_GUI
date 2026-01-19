/********************************************************************************
** Form generated from reading UI file 'xyplatformUI.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XYPLATFORMUI_H
#define UI_XYPLATFORMUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XyPlatform
{
public:
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_19;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_22;
    QLCDNumber *XlcdNumber;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_21;
    QLCDNumber *YlcdNumber;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QSpinBox *VelAxisChooseBox;
    QDoubleSpinBox *VelocitySpinBox;
    QLabel *label_5;
    QPushButton *VelocityPushButton;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QSpinBox *AccAxisChooseBox;
    QDoubleSpinBox *AccSpinBox;
    QLabel *label_6;
    QPushButton *accPushButton;
    QPushButton *OpenCardbutton;
    QPushButton *CloseCardbutton;
    QFrame *frame;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_15;
    QRadioButton *moveOnceBtn;
    QRadioButton *moveEndureBtn;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *MoveDistanceEdit;
    QLabel *label_14;
    QFrame *Moveframe;
    QHBoxLayout *horizontalLayout_8;
    QGridLayout *gridLayout;
    QPushButton *CommutButton;
    QPushButton *UpButton;
    QPushButton *StopMotionSoftButton;
    QPushButton *LeftButton;
    QPushButton *pushButton;
    QPushButton *RightButton;
    QPushButton *DownButton;
    QWidget *CameraWidget;
    QVBoxLayout *verticalLayout_19;
    QLabel *label;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QPushButton *savePhotoButton;
    QPushButton *openCameraButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *savePathEdit;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *MsgTextEdit;
    QWidget *RotationAxisWidget;
    QHBoxLayout *horizontalLayout_19;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_23;
    QLCDNumber *LCD1;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *LeftButton_1;
    QLineEdit *CurrXVelEdit_1;
    QPushButton *RightButton_1;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_31;
    QLCDNumber *LCD2;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *LeftButton_2;
    QLineEdit *CurrXVelEdit_2;
    QPushButton *RightButton_2;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_32;
    QLCDNumber *LCDt3;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *LeftButton_3;
    QLineEdit *CurrXVelEdit_3;
    QPushButton *RightButton_3;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_33;
    QLCDNumber *LCDt4;
    QHBoxLayout *horizontalLayout_33;
    QPushButton *LeftButton_4;
    QLineEdit *CurrXVelEdit_4;
    QPushButton *RightButton_4;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *LeftButton_10;
    QPushButton *LeftButton_9;
    QPushButton *LeftButton_7;
    QPushButton *LeftButton_6;
    QPushButton *AutoGet16PhotosButton;

    void setupUi(QWidget *XyPlatform)
    {
        if (XyPlatform->objectName().isEmpty())
            XyPlatform->setObjectName(QString::fromUtf8("XyPlatform"));
        XyPlatform->resize(1567, 972);
        XyPlatform->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 65, 66);\n"
"background-color: rgb(240, 240, 240);"));
        verticalLayout_11 = new QVBoxLayout(XyPlatform);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        widget = new QWidget(XyPlatform);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_17 = new QVBoxLayout(widget);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        horizontalLayout_22->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_19 = new QLabel(widget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(120, 70));
        label_19->setMaximumSize(QSize(120, 70));
        label_19->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_22->addWidget(label_19);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_22 = new QLabel(widget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(0, 0));
        label_22->setMaximumSize(QSize(9999, 9999));
        QFont font;
        font.setPointSize(16);
        label_22->setFont(font);
        label_22->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_25->addWidget(label_22);

        XlcdNumber = new QLCDNumber(widget);
        XlcdNumber->setObjectName(QString::fromUtf8("XlcdNumber"));
        sizePolicy.setHeightForWidth(XlcdNumber->sizePolicy().hasHeightForWidth());
        XlcdNumber->setSizePolicy(sizePolicy);
        XlcdNumber->setMinimumSize(QSize(0, 0));
        XlcdNumber->setMaximumSize(QSize(9999, 99999));
        XlcdNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        XlcdNumber->setSmallDecimalPoint(true);
        XlcdNumber->setDigitCount(5);
        XlcdNumber->setProperty("value", QVariant(0.000000000000000));
        XlcdNumber->setProperty("intValue", QVariant(0));

        horizontalLayout_25->addWidget(XlcdNumber);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_25->addWidget(label_3);

        horizontalLayout_25->setStretch(0, 1);
        horizontalLayout_25->setStretch(1, 2);
        horizontalLayout_25->setStretch(2, 2);

        verticalLayout_10->addLayout(horizontalLayout_25);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_21 = new QLabel(widget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(0, 0));
        label_21->setMaximumSize(QSize(9999, 9999));
        label_21->setFont(font);
        label_21->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_24->addWidget(label_21);

        YlcdNumber = new QLCDNumber(widget);
        YlcdNumber->setObjectName(QString::fromUtf8("YlcdNumber"));
        sizePolicy.setHeightForWidth(YlcdNumber->sizePolicy().hasHeightForWidth());
        YlcdNumber->setSizePolicy(sizePolicy);
        YlcdNumber->setMinimumSize(QSize(0, 0));
        YlcdNumber->setMaximumSize(QSize(9999, 99999));
        YlcdNumber->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        YlcdNumber->setSmallDecimalPoint(true);
        YlcdNumber->setDigitCount(5);
        YlcdNumber->setProperty("value", QVariant(0.000000000000000));
        YlcdNumber->setProperty("intValue", QVariant(0));

        horizontalLayout_24->addWidget(YlcdNumber);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_24->addWidget(label_2);

        horizontalLayout_24->setStretch(0, 1);
        horizontalLayout_24->setStretch(1, 2);
        horizontalLayout_24->setStretch(2, 2);

        verticalLayout_10->addLayout(horizontalLayout_24);


        horizontalLayout_22->addLayout(verticalLayout_10);


        verticalLayout_9->addLayout(horizontalLayout_22);


        verticalLayout_17->addLayout(verticalLayout_9);


        verticalLayout_8->addWidget(widget);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widget_2 = new QWidget(XyPlatform);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_7 = new QVBoxLayout(widget_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(20);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(0, 0));
        label_13->setMaximumSize(QSize(120, 70));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_12->addWidget(label_13);

        VelAxisChooseBox = new QSpinBox(widget_2);
        VelAxisChooseBox->setObjectName(QString::fromUtf8("VelAxisChooseBox"));
        sizePolicy.setHeightForWidth(VelAxisChooseBox->sizePolicy().hasHeightForWidth());
        VelAxisChooseBox->setSizePolicy(sizePolicy);
        VelAxisChooseBox->setMinimumSize(QSize(0, 0));
        VelAxisChooseBox->setMaximumSize(QSize(130, 16777215));
        VelAxisChooseBox->setMinimum(1);
        VelAxisChooseBox->setMaximum(6);

        horizontalLayout_12->addWidget(VelAxisChooseBox);

        VelocitySpinBox = new QDoubleSpinBox(widget_2);
        VelocitySpinBox->setObjectName(QString::fromUtf8("VelocitySpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(VelocitySpinBox->sizePolicy().hasHeightForWidth());
        VelocitySpinBox->setSizePolicy(sizePolicy2);
        VelocitySpinBox->setSingleStep(5.000000000000000);
        VelocitySpinBox->setValue(20.000000000000000);

        horizontalLayout_12->addWidget(VelocitySpinBox);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        horizontalLayout_12->addWidget(label_5);

        VelocityPushButton = new QPushButton(widget_2);
        VelocityPushButton->setObjectName(QString::fromUtf8("VelocityPushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(VelocityPushButton->sizePolicy().hasHeightForWidth());
        VelocityPushButton->setSizePolicy(sizePolicy3);
        VelocityPushButton->setMinimumSize(QSize(0, 0));
        VelocityPushButton->setMaximumSize(QSize(80, 70));

        horizontalLayout_12->addWidget(VelocityPushButton);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(0, 0));
        label_10->setMaximumSize(QSize(120, 70));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(label_10);

        AccAxisChooseBox = new QSpinBox(widget_2);
        AccAxisChooseBox->setObjectName(QString::fromUtf8("AccAxisChooseBox"));
        sizePolicy.setHeightForWidth(AccAxisChooseBox->sizePolicy().hasHeightForWidth());
        AccAxisChooseBox->setSizePolicy(sizePolicy);
        AccAxisChooseBox->setMinimumSize(QSize(0, 0));
        AccAxisChooseBox->setMaximumSize(QSize(130, 16777215));
        AccAxisChooseBox->setMinimum(1);
        AccAxisChooseBox->setMaximum(6);

        horizontalLayout_7->addWidget(AccAxisChooseBox);

        AccSpinBox = new QDoubleSpinBox(widget_2);
        AccSpinBox->setObjectName(QString::fromUtf8("AccSpinBox"));
        sizePolicy2.setHeightForWidth(AccSpinBox->sizePolicy().hasHeightForWidth());
        AccSpinBox->setSizePolicy(sizePolicy2);
        AccSpinBox->setDecimals(0);
        AccSpinBox->setMaximum(10000.000000000000000);
        AccSpinBox->setSingleStep(500.000000000000000);
        AccSpinBox->setValue(5000.000000000000000);

        horizontalLayout_7->addWidget(AccSpinBox);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        horizontalLayout_7->addWidget(label_6);

        accPushButton = new QPushButton(widget_2);
        accPushButton->setObjectName(QString::fromUtf8("accPushButton"));
        accPushButton->setMinimumSize(QSize(0, 0));
        accPushButton->setMaximumSize(QSize(80, 70));

        horizontalLayout_7->addWidget(accPushButton);


        verticalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_4);

        OpenCardbutton = new QPushButton(widget_2);
        OpenCardbutton->setObjectName(QString::fromUtf8("OpenCardbutton"));

        verticalLayout_7->addWidget(OpenCardbutton);

        CloseCardbutton = new QPushButton(widget_2);
        CloseCardbutton->setObjectName(QString::fromUtf8("CloseCardbutton"));

        verticalLayout_7->addWidget(CloseCardbutton);


        horizontalLayout_5->addWidget(widget_2);

        horizontalLayout_5->setStretch(0, 5);

        verticalLayout_8->addLayout(horizontalLayout_5);

        verticalLayout_8->setStretch(0, 1);
        verticalLayout_8->setStretch(1, 1);

        horizontalLayout_6->addLayout(verticalLayout_8);

        frame = new QFrame(XyPlatform);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("\n"
"\n"
"background-color: rgb(244, 244, 244);"));
        frame->setFrameShape(QFrame::NoFrame);
        verticalLayout_13 = new QVBoxLayout(frame);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        groupBox->setFont(font1);
        verticalLayout_18 = new QVBoxLayout(groupBox);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setSizeConstraint(QLayout::SetDefaultConstraint);
        moveOnceBtn = new QRadioButton(groupBox);
        moveOnceBtn->setObjectName(QString::fromUtf8("moveOnceBtn"));
        moveOnceBtn->setEnabled(true);
        sizePolicy.setHeightForWidth(moveOnceBtn->sizePolicy().hasHeightForWidth());
        moveOnceBtn->setSizePolicy(sizePolicy);
        moveOnceBtn->setChecked(true);

        verticalLayout_15->addWidget(moveOnceBtn);

        moveEndureBtn = new QRadioButton(groupBox);
        moveEndureBtn->setObjectName(QString::fromUtf8("moveEndureBtn"));
        moveEndureBtn->setEnabled(true);
        sizePolicy.setHeightForWidth(moveEndureBtn->sizePolicy().hasHeightForWidth());
        moveEndureBtn->setSizePolicy(sizePolicy);
        moveEndureBtn->setChecked(false);

        verticalLayout_15->addWidget(moveEndureBtn);


        verticalLayout_18->addLayout(verticalLayout_15);


        horizontalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        MoveDistanceEdit = new QLineEdit(groupBox_3);
        MoveDistanceEdit->setObjectName(QString::fromUtf8("MoveDistanceEdit"));
        sizePolicy.setHeightForWidth(MoveDistanceEdit->sizePolicy().hasHeightForWidth());
        MoveDistanceEdit->setSizePolicy(sizePolicy);
        MoveDistanceEdit->setMinimumSize(QSize(0, 0));
        MoveDistanceEdit->setMaximumSize(QSize(120, 60));
        MoveDistanceEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        MoveDistanceEdit->setCursorPosition(1);
        MoveDistanceEdit->setReadOnly(false);

        horizontalLayout_4->addWidget(MoveDistanceEdit);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_4->addWidget(label_14);


        horizontalLayout->addWidget(groupBox_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        verticalLayout_13->addLayout(horizontalLayout);

        Moveframe = new QFrame(frame);
        Moveframe->setObjectName(QString::fromUtf8("Moveframe"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Moveframe->sizePolicy().hasHeightForWidth());
        Moveframe->setSizePolicy(sizePolicy4);
        Moveframe->setLayoutDirection(Qt::LeftToRight);
        Moveframe->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 254, 254);"));
        Moveframe->setFrameShape(QFrame::NoFrame);
        horizontalLayout_8 = new QHBoxLayout(Moveframe);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        CommutButton = new QPushButton(Moveframe);
        CommutButton->setObjectName(QString::fromUtf8("CommutButton"));
        sizePolicy.setHeightForWidth(CommutButton->sizePolicy().hasHeightForWidth());
        CommutButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(CommutButton, 0, 0, 1, 1);

        UpButton = new QPushButton(Moveframe);
        UpButton->setObjectName(QString::fromUtf8("UpButton"));
        sizePolicy.setHeightForWidth(UpButton->sizePolicy().hasHeightForWidth());
        UpButton->setSizePolicy(sizePolicy);
        UpButton->setMinimumSize(QSize(0, 0));
        UpButton->setMaximumSize(QSize(90000, 999999));
        UpButton->setFocusPolicy(Qt::NoFocus);
        UpButton->setLayoutDirection(Qt::LeftToRight);
        UpButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photos/UpArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        UpButton->setIcon(icon);
        UpButton->setIconSize(QSize(110, 110));

        gridLayout->addWidget(UpButton, 0, 1, 1, 1);

        StopMotionSoftButton = new QPushButton(Moveframe);
        StopMotionSoftButton->setObjectName(QString::fromUtf8("StopMotionSoftButton"));
        sizePolicy.setHeightForWidth(StopMotionSoftButton->sizePolicy().hasHeightForWidth());
        StopMotionSoftButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(StopMotionSoftButton, 0, 2, 1, 1);

        LeftButton = new QPushButton(Moveframe);
        LeftButton->setObjectName(QString::fromUtf8("LeftButton"));
        sizePolicy.setHeightForWidth(LeftButton->sizePolicy().hasHeightForWidth());
        LeftButton->setSizePolicy(sizePolicy);
        LeftButton->setMinimumSize(QSize(0, 0));
        LeftButton->setMaximumSize(QSize(99999, 99999));
        LeftButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/photos/LeftArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        LeftButton->setIcon(icon1);
        LeftButton->setIconSize(QSize(110, 110));

        gridLayout->addWidget(LeftButton, 1, 0, 1, 1);

        pushButton = new QPushButton(Moveframe);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        RightButton = new QPushButton(Moveframe);
        RightButton->setObjectName(QString::fromUtf8("RightButton"));
        sizePolicy.setHeightForWidth(RightButton->sizePolicy().hasHeightForWidth());
        RightButton->setSizePolicy(sizePolicy);
        RightButton->setMinimumSize(QSize(0, 0));
        RightButton->setMaximumSize(QSize(99999, 999999));
        RightButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/photos/RightArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        RightButton->setIcon(icon2);
        RightButton->setIconSize(QSize(110, 110));

        gridLayout->addWidget(RightButton, 1, 2, 1, 1);

        DownButton = new QPushButton(Moveframe);
        DownButton->setObjectName(QString::fromUtf8("DownButton"));
        sizePolicy.setHeightForWidth(DownButton->sizePolicy().hasHeightForWidth());
        DownButton->setSizePolicy(sizePolicy);
        DownButton->setMinimumSize(QSize(0, 0));
        DownButton->setMaximumSize(QSize(999999, 99999));
        DownButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/photos/DownArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        DownButton->setIcon(icon3);
        DownButton->setIconSize(QSize(110, 110));

        gridLayout->addWidget(DownButton, 2, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 1);

        horizontalLayout_8->addLayout(gridLayout);


        verticalLayout_13->addWidget(Moveframe);

        verticalLayout_13->setStretch(0, 1);
        verticalLayout_13->setStretch(1, 3);

        horizontalLayout_6->addWidget(frame);

        CameraWidget = new QWidget(XyPlatform);
        CameraWidget->setObjectName(QString::fromUtf8("CameraWidget"));
        verticalLayout_19 = new QVBoxLayout(CameraWidget);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label = new QLabel(CameraWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 65, 66);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_19->addWidget(label);

        groupBox_5 = new QGroupBox(CameraWidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout = new QVBoxLayout(groupBox_5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        savePhotoButton = new QPushButton(groupBox_5);
        savePhotoButton->setObjectName(QString::fromUtf8("savePhotoButton"));

        verticalLayout->addWidget(savePhotoButton);

        openCameraButton = new QPushButton(groupBox_5);
        openCameraButton->setObjectName(QString::fromUtf8("openCameraButton"));

        verticalLayout->addWidget(openCameraButton);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        savePathEdit = new QLineEdit(groupBox_5);
        savePathEdit->setObjectName(QString::fromUtf8("savePathEdit"));
        sizePolicy.setHeightForWidth(savePathEdit->sizePolicy().hasHeightForWidth());
        savePathEdit->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(savePathEdit);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 5);

        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        MsgTextEdit = new QTextEdit(groupBox_5);
        MsgTextEdit->setObjectName(QString::fromUtf8("MsgTextEdit"));
        sizePolicy.setHeightForWidth(MsgTextEdit->sizePolicy().hasHeightForWidth());
        MsgTextEdit->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(MsgTextEdit);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_19->addWidget(groupBox_5);


        horizontalLayout_6->addWidget(CameraWidget);


        verticalLayout_11->addLayout(horizontalLayout_6);

        RotationAxisWidget = new QWidget(XyPlatform);
        RotationAxisWidget->setObjectName(QString::fromUtf8("RotationAxisWidget"));
        horizontalLayout_19 = new QHBoxLayout(RotationAxisWidget);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        widget_3 = new QWidget(RotationAxisWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout_14 = new QVBoxLayout(widget_3);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_23 = new QLabel(widget_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);
        label_23->setMinimumSize(QSize(0, 0));
        label_23->setMaximumSize(QSize(9999, 9999));
        label_23->setFont(font);
        label_23->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_26->addWidget(label_23);

        LCD1 = new QLCDNumber(widget_3);
        LCD1->setObjectName(QString::fromUtf8("LCD1"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(LCD1->sizePolicy().hasHeightForWidth());
        LCD1->setSizePolicy(sizePolicy5);
        LCD1->setMinimumSize(QSize(0, 0));
        LCD1->setMaximumSize(QSize(9999, 99999));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Arabic"));
        font2.setPointSize(7);
        LCD1->setFont(font2);
        LCD1->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        LCD1->setSmallDecimalPoint(true);
        LCD1->setDigitCount(3);
        LCD1->setProperty("value", QVariant(0.000000000000000));
        LCD1->setProperty("intValue", QVariant(0));

        horizontalLayout_26->addWidget(LCD1);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        LeftButton_1 = new QPushButton(widget_3);
        LeftButton_1->setObjectName(QString::fromUtf8("LeftButton_1"));
        sizePolicy.setHeightForWidth(LeftButton_1->sizePolicy().hasHeightForWidth());
        LeftButton_1->setSizePolicy(sizePolicy);
        LeftButton_1->setMinimumSize(QSize(0, 0));
        LeftButton_1->setMaximumSize(QSize(99999, 99999));
        LeftButton_1->setStyleSheet(QString::fromUtf8(""));
        LeftButton_1->setIcon(icon1);
        LeftButton_1->setIconSize(QSize(110, 110));

        horizontalLayout_20->addWidget(LeftButton_1);

        CurrXVelEdit_1 = new QLineEdit(widget_3);
        CurrXVelEdit_1->setObjectName(QString::fromUtf8("CurrXVelEdit_1"));
        sizePolicy.setHeightForWidth(CurrXVelEdit_1->sizePolicy().hasHeightForWidth());
        CurrXVelEdit_1->setSizePolicy(sizePolicy);
        CurrXVelEdit_1->setMinimumSize(QSize(0, 0));
        CurrXVelEdit_1->setMaximumSize(QSize(120, 60));
        CurrXVelEdit_1->setCursorPosition(2);
        CurrXVelEdit_1->setReadOnly(false);

        horizontalLayout_20->addWidget(CurrXVelEdit_1);

        RightButton_1 = new QPushButton(widget_3);
        RightButton_1->setObjectName(QString::fromUtf8("RightButton_1"));
        sizePolicy.setHeightForWidth(RightButton_1->sizePolicy().hasHeightForWidth());
        RightButton_1->setSizePolicy(sizePolicy);
        RightButton_1->setMinimumSize(QSize(0, 0));
        RightButton_1->setMaximumSize(QSize(99999, 999999));
        RightButton_1->setStyleSheet(QString::fromUtf8(""));
        RightButton_1->setIcon(icon2);
        RightButton_1->setIconSize(QSize(110, 110));

        horizontalLayout_20->addWidget(RightButton_1);


        horizontalLayout_26->addLayout(horizontalLayout_20);

        horizontalLayout_26->setStretch(0, 1);
        horizontalLayout_26->setStretch(1, 2);
        horizontalLayout_26->setStretch(2, 2);

        verticalLayout_14->addLayout(horizontalLayout_26);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        label_31 = new QLabel(widget_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy);
        label_31->setMinimumSize(QSize(0, 0));
        label_31->setMaximumSize(QSize(9999, 9999));
        label_31->setFont(font);
        label_31->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_30->addWidget(label_31);

        LCD2 = new QLCDNumber(widget_3);
        LCD2->setObjectName(QString::fromUtf8("LCD2"));
        sizePolicy5.setHeightForWidth(LCD2->sizePolicy().hasHeightForWidth());
        LCD2->setSizePolicy(sizePolicy5);
        LCD2->setMinimumSize(QSize(0, 0));
        LCD2->setMaximumSize(QSize(9999, 99999));
        LCD2->setFont(font2);
        LCD2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        LCD2->setSmallDecimalPoint(true);
        LCD2->setDigitCount(3);
        LCD2->setProperty("value", QVariant(0.000000000000000));
        LCD2->setProperty("intValue", QVariant(0));

        horizontalLayout_30->addWidget(LCD2);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        LeftButton_2 = new QPushButton(widget_3);
        LeftButton_2->setObjectName(QString::fromUtf8("LeftButton_2"));
        sizePolicy.setHeightForWidth(LeftButton_2->sizePolicy().hasHeightForWidth());
        LeftButton_2->setSizePolicy(sizePolicy);
        LeftButton_2->setMinimumSize(QSize(0, 0));
        LeftButton_2->setMaximumSize(QSize(99999, 99999));
        LeftButton_2->setStyleSheet(QString::fromUtf8(""));
        LeftButton_2->setIcon(icon1);
        LeftButton_2->setIconSize(QSize(110, 110));

        horizontalLayout_21->addWidget(LeftButton_2);

        CurrXVelEdit_2 = new QLineEdit(widget_3);
        CurrXVelEdit_2->setObjectName(QString::fromUtf8("CurrXVelEdit_2"));
        sizePolicy.setHeightForWidth(CurrXVelEdit_2->sizePolicy().hasHeightForWidth());
        CurrXVelEdit_2->setSizePolicy(sizePolicy);
        CurrXVelEdit_2->setMinimumSize(QSize(0, 0));
        CurrXVelEdit_2->setMaximumSize(QSize(120, 60));
        CurrXVelEdit_2->setReadOnly(false);

        horizontalLayout_21->addWidget(CurrXVelEdit_2);

        RightButton_2 = new QPushButton(widget_3);
        RightButton_2->setObjectName(QString::fromUtf8("RightButton_2"));
        sizePolicy.setHeightForWidth(RightButton_2->sizePolicy().hasHeightForWidth());
        RightButton_2->setSizePolicy(sizePolicy);
        RightButton_2->setMinimumSize(QSize(0, 0));
        RightButton_2->setMaximumSize(QSize(99999, 999999));
        RightButton_2->setStyleSheet(QString::fromUtf8(""));
        RightButton_2->setIcon(icon2);
        RightButton_2->setIconSize(QSize(110, 110));

        horizontalLayout_21->addWidget(RightButton_2);


        horizontalLayout_30->addLayout(horizontalLayout_21);

        horizontalLayout_30->setStretch(0, 1);
        horizontalLayout_30->setStretch(1, 2);
        horizontalLayout_30->setStretch(2, 2);

        verticalLayout_14->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_32 = new QLabel(widget_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        sizePolicy.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy);
        label_32->setMinimumSize(QSize(0, 0));
        label_32->setMaximumSize(QSize(9999, 9999));
        label_32->setFont(font);
        label_32->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_31->addWidget(label_32);

        LCDt3 = new QLCDNumber(widget_3);
        LCDt3->setObjectName(QString::fromUtf8("LCDt3"));
        sizePolicy5.setHeightForWidth(LCDt3->sizePolicy().hasHeightForWidth());
        LCDt3->setSizePolicy(sizePolicy5);
        LCDt3->setMinimumSize(QSize(0, 0));
        LCDt3->setMaximumSize(QSize(9999, 99999));
        LCDt3->setFont(font2);
        LCDt3->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        LCDt3->setSmallDecimalPoint(true);
        LCDt3->setDigitCount(3);
        LCDt3->setProperty("value", QVariant(0.000000000000000));
        LCDt3->setProperty("intValue", QVariant(0));

        horizontalLayout_31->addWidget(LCDt3);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        LeftButton_3 = new QPushButton(widget_3);
        LeftButton_3->setObjectName(QString::fromUtf8("LeftButton_3"));
        sizePolicy.setHeightForWidth(LeftButton_3->sizePolicy().hasHeightForWidth());
        LeftButton_3->setSizePolicy(sizePolicy);
        LeftButton_3->setMinimumSize(QSize(0, 0));
        LeftButton_3->setMaximumSize(QSize(99999, 99999));
        LeftButton_3->setStyleSheet(QString::fromUtf8(""));
        LeftButton_3->setIcon(icon1);
        LeftButton_3->setIconSize(QSize(110, 110));

        horizontalLayout_23->addWidget(LeftButton_3);

        CurrXVelEdit_3 = new QLineEdit(widget_3);
        CurrXVelEdit_3->setObjectName(QString::fromUtf8("CurrXVelEdit_3"));
        sizePolicy.setHeightForWidth(CurrXVelEdit_3->sizePolicy().hasHeightForWidth());
        CurrXVelEdit_3->setSizePolicy(sizePolicy);
        CurrXVelEdit_3->setMinimumSize(QSize(0, 0));
        CurrXVelEdit_3->setMaximumSize(QSize(120, 60));
        CurrXVelEdit_3->setReadOnly(false);

        horizontalLayout_23->addWidget(CurrXVelEdit_3);

        RightButton_3 = new QPushButton(widget_3);
        RightButton_3->setObjectName(QString::fromUtf8("RightButton_3"));
        sizePolicy.setHeightForWidth(RightButton_3->sizePolicy().hasHeightForWidth());
        RightButton_3->setSizePolicy(sizePolicy);
        RightButton_3->setMinimumSize(QSize(0, 0));
        RightButton_3->setMaximumSize(QSize(99999, 999999));
        RightButton_3->setStyleSheet(QString::fromUtf8(""));
        RightButton_3->setIcon(icon2);
        RightButton_3->setIconSize(QSize(110, 110));

        horizontalLayout_23->addWidget(RightButton_3);


        horizontalLayout_31->addLayout(horizontalLayout_23);

        horizontalLayout_31->setStretch(0, 1);
        horizontalLayout_31->setStretch(1, 2);
        horizontalLayout_31->setStretch(2, 2);

        verticalLayout_14->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        label_33 = new QLabel(widget_3);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        sizePolicy.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy);
        label_33->setMinimumSize(QSize(0, 0));
        label_33->setMaximumSize(QSize(9999, 9999));
        label_33->setFont(font);
        label_33->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_32->addWidget(label_33);

        LCDt4 = new QLCDNumber(widget_3);
        LCDt4->setObjectName(QString::fromUtf8("LCDt4"));
        sizePolicy5.setHeightForWidth(LCDt4->sizePolicy().hasHeightForWidth());
        LCDt4->setSizePolicy(sizePolicy5);
        LCDt4->setMinimumSize(QSize(0, 0));
        LCDt4->setMaximumSize(QSize(9999, 99999));
        LCDt4->setFont(font2);
        LCDt4->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        LCDt4->setSmallDecimalPoint(false);
        LCDt4->setDigitCount(3);
        LCDt4->setSegmentStyle(QLCDNumber::Filled);
        LCDt4->setProperty("value", QVariant(0.000000000000000));
        LCDt4->setProperty("intValue", QVariant(0));

        horizontalLayout_32->addWidget(LCDt4);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        LeftButton_4 = new QPushButton(widget_3);
        LeftButton_4->setObjectName(QString::fromUtf8("LeftButton_4"));
        sizePolicy.setHeightForWidth(LeftButton_4->sizePolicy().hasHeightForWidth());
        LeftButton_4->setSizePolicy(sizePolicy);
        LeftButton_4->setMinimumSize(QSize(0, 0));
        LeftButton_4->setMaximumSize(QSize(99999, 99999));
        LeftButton_4->setStyleSheet(QString::fromUtf8(""));
        LeftButton_4->setIcon(icon1);
        LeftButton_4->setIconSize(QSize(110, 110));

        horizontalLayout_33->addWidget(LeftButton_4);

        CurrXVelEdit_4 = new QLineEdit(widget_3);
        CurrXVelEdit_4->setObjectName(QString::fromUtf8("CurrXVelEdit_4"));
        sizePolicy.setHeightForWidth(CurrXVelEdit_4->sizePolicy().hasHeightForWidth());
        CurrXVelEdit_4->setSizePolicy(sizePolicy);
        CurrXVelEdit_4->setMinimumSize(QSize(0, 0));
        CurrXVelEdit_4->setMaximumSize(QSize(120, 60));
        CurrXVelEdit_4->setReadOnly(false);

        horizontalLayout_33->addWidget(CurrXVelEdit_4);

        RightButton_4 = new QPushButton(widget_3);
        RightButton_4->setObjectName(QString::fromUtf8("RightButton_4"));
        sizePolicy.setHeightForWidth(RightButton_4->sizePolicy().hasHeightForWidth());
        RightButton_4->setSizePolicy(sizePolicy);
        RightButton_4->setMinimumSize(QSize(0, 0));
        RightButton_4->setMaximumSize(QSize(99999, 999999));
        RightButton_4->setStyleSheet(QString::fromUtf8(""));
        RightButton_4->setIcon(icon2);
        RightButton_4->setIconSize(QSize(110, 110));

        horizontalLayout_33->addWidget(RightButton_4);


        horizontalLayout_32->addLayout(horizontalLayout_33);

        horizontalLayout_32->setStretch(0, 1);
        horizontalLayout_32->setStretch(1, 2);
        horizontalLayout_32->setStretch(2, 2);

        verticalLayout_14->addLayout(horizontalLayout_32);


        horizontalLayout_19->addWidget(widget_3);

        groupBox_4 = new QGroupBox(RotationAxisWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        LeftButton_10 = new QPushButton(groupBox_4);
        LeftButton_10->setObjectName(QString::fromUtf8("LeftButton_10"));
        sizePolicy.setHeightForWidth(LeftButton_10->sizePolicy().hasHeightForWidth());
        LeftButton_10->setSizePolicy(sizePolicy);
        LeftButton_10->setMinimumSize(QSize(0, 0));
        LeftButton_10->setMaximumSize(QSize(99999, 99999));
        LeftButton_10->setStyleSheet(QString::fromUtf8(""));
        LeftButton_10->setIcon(icon1);
        LeftButton_10->setIconSize(QSize(110, 110));

        verticalLayout_2->addWidget(LeftButton_10);

        LeftButton_9 = new QPushButton(groupBox_4);
        LeftButton_9->setObjectName(QString::fromUtf8("LeftButton_9"));
        sizePolicy.setHeightForWidth(LeftButton_9->sizePolicy().hasHeightForWidth());
        LeftButton_9->setSizePolicy(sizePolicy);
        LeftButton_9->setMinimumSize(QSize(0, 0));
        LeftButton_9->setMaximumSize(QSize(99999, 99999));
        LeftButton_9->setStyleSheet(QString::fromUtf8(""));
        LeftButton_9->setIcon(icon1);
        LeftButton_9->setIconSize(QSize(110, 110));

        verticalLayout_2->addWidget(LeftButton_9);

        LeftButton_7 = new QPushButton(groupBox_4);
        LeftButton_7->setObjectName(QString::fromUtf8("LeftButton_7"));
        sizePolicy.setHeightForWidth(LeftButton_7->sizePolicy().hasHeightForWidth());
        LeftButton_7->setSizePolicy(sizePolicy);
        LeftButton_7->setMinimumSize(QSize(0, 0));
        LeftButton_7->setMaximumSize(QSize(99999, 99999));
        LeftButton_7->setStyleSheet(QString::fromUtf8(""));
        LeftButton_7->setIcon(icon1);
        LeftButton_7->setIconSize(QSize(110, 110));

        verticalLayout_2->addWidget(LeftButton_7);

        LeftButton_6 = new QPushButton(groupBox_4);
        LeftButton_6->setObjectName(QString::fromUtf8("LeftButton_6"));
        sizePolicy.setHeightForWidth(LeftButton_6->sizePolicy().hasHeightForWidth());
        LeftButton_6->setSizePolicy(sizePolicy);
        LeftButton_6->setMinimumSize(QSize(0, 0));
        LeftButton_6->setMaximumSize(QSize(99999, 99999));
        LeftButton_6->setStyleSheet(QString::fromUtf8(""));
        LeftButton_6->setIcon(icon1);
        LeftButton_6->setIconSize(QSize(110, 110));

        verticalLayout_2->addWidget(LeftButton_6);

        AutoGet16PhotosButton = new QPushButton(groupBox_4);
        AutoGet16PhotosButton->setObjectName(QString::fromUtf8("AutoGet16PhotosButton"));
        sizePolicy.setHeightForWidth(AutoGet16PhotosButton->sizePolicy().hasHeightForWidth());
        AutoGet16PhotosButton->setSizePolicy(sizePolicy);
        AutoGet16PhotosButton->setMinimumSize(QSize(0, 0));
        AutoGet16PhotosButton->setMaximumSize(QSize(99999, 99999));
        AutoGet16PhotosButton->setStyleSheet(QString::fromUtf8(""));
        AutoGet16PhotosButton->setIcon(icon1);
        AutoGet16PhotosButton->setIconSize(QSize(110, 110));

        verticalLayout_2->addWidget(AutoGet16PhotosButton);


        horizontalLayout_19->addWidget(groupBox_4);

        horizontalLayout_19->setStretch(0, 2);
        horizontalLayout_19->setStretch(1, 1);

        verticalLayout_11->addWidget(RotationAxisWidget);

        verticalLayout_11->setStretch(0, 4);
        verticalLayout_11->setStretch(1, 1);

        retranslateUi(XyPlatform);

        QMetaObject::connectSlotsByName(XyPlatform);
    } // setupUi

    void retranslateUi(QWidget *XyPlatform)
    {
        XyPlatform->setWindowTitle(QCoreApplication::translate("XyPlatform", "Form", nullptr));
        label_19->setText(QCoreApplication::translate("XyPlatform", "\347\273\235\345\257\271\345\235\220\346\240\207", nullptr));
        label_22->setText(QCoreApplication::translate("XyPlatform", "X", nullptr));
        label_3->setText(QCoreApplication::translate("XyPlatform", "mm", nullptr));
        label_21->setText(QCoreApplication::translate("XyPlatform", "Y", nullptr));
        label_2->setText(QCoreApplication::translate("XyPlatform", "mm", nullptr));
        label_13->setText(QCoreApplication::translate("XyPlatform", "\350\277\220\345\212\250\351\200\237\345\272\246\350\256\276\345\256\232", nullptr));
        label_5->setText(QCoreApplication::translate("XyPlatform", "mm/s", nullptr));
        VelocityPushButton->setText(QCoreApplication::translate("XyPlatform", "\347\241\256\350\256\244", nullptr));
        label_10->setText(QCoreApplication::translate("XyPlatform", "\345\212\240\351\200\237\345\272\246\350\256\276\345\256\232", nullptr));
        label_6->setText(QCoreApplication::translate("XyPlatform", "mm/s^2", nullptr));
        accPushButton->setText(QCoreApplication::translate("XyPlatform", "\347\241\256\350\256\244", nullptr));
        OpenCardbutton->setText(QCoreApplication::translate("XyPlatform", "\346\211\223\345\274\200\346\235\277\345\215\241", nullptr));
        CloseCardbutton->setText(QCoreApplication::translate("XyPlatform", "\345\205\263\351\227\255\346\235\277\345\215\241", nullptr));
        groupBox->setTitle(QCoreApplication::translate("XyPlatform", "\346\250\241\345\274\217\351\200\211\346\213\251", nullptr));
        moveOnceBtn->setText(QCoreApplication::translate("XyPlatform", "\347\202\271\346\214\211\346\255\245\350\277\233", nullptr));
        moveEndureBtn->setText(QCoreApplication::translate("XyPlatform", "\346\214\201\347\273\255\347\247\273\345\212\250", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("XyPlatform", "\346\255\245\350\277\233\350\267\235\347\246\273", nullptr));
        MoveDistanceEdit->setText(QCoreApplication::translate("XyPlatform", "5", nullptr));
        label_14->setText(QCoreApplication::translate("XyPlatform", "mm", nullptr));
        CommutButton->setText(QCoreApplication::translate("XyPlatform", "\346\215\242\345\220\221", nullptr));
        UpButton->setText(QCoreApplication::translate("XyPlatform", "Y+", nullptr));
        StopMotionSoftButton->setText(QCoreApplication::translate("XyPlatform", "\350\275\257\345\201\234\346\255\242", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton->setText(QCoreApplication::translate("XyPlatform", "X-", nullptr));
        pushButton->setText(QCoreApplication::translate("XyPlatform", "\346\265\213\350\257\225", nullptr));
        RightButton->setText(QCoreApplication::translate("XyPlatform", "X+", nullptr));
        DownButton->setText(QCoreApplication::translate("XyPlatform", "Y-", nullptr));
        label->setText(QCoreApplication::translate("XyPlatform", "\345\233\276\347\211\207\345\261\225\347\244\272", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("XyPlatform", "\345\212\237\350\203\275\351\200\211\346\213\251", nullptr));
        savePhotoButton->setText(QCoreApplication::translate("XyPlatform", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
        openCameraButton->setText(QCoreApplication::translate("XyPlatform", "\346\211\223\345\274\200\347\233\270\346\234\272", nullptr));
        label_4->setText(QCoreApplication::translate("XyPlatform", "\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", nullptr));
        savePathEdit->setText(QCoreApplication::translate("XyPlatform", "/desktop", nullptr));
        label_23->setText(QCoreApplication::translate("XyPlatform", "\350\275\254\345\217\2601 \350\247\222\345\272\246(\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_1->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_1->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_1->setText(QCoreApplication::translate("XyPlatform", "Angle-", nullptr));
        CurrXVelEdit_1->setText(QCoreApplication::translate("XyPlatform", "45", nullptr));
        RightButton_1->setText(QCoreApplication::translate("XyPlatform", "Angle+", nullptr));
        label_31->setText(QCoreApplication::translate("XyPlatform", "\350\275\254\345\217\2602 \350\247\222\345\272\246(\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_2->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_2->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_2->setText(QCoreApplication::translate("XyPlatform", "Angle-", nullptr));
        CurrXVelEdit_2->setText(QCoreApplication::translate("XyPlatform", "45", nullptr));
        RightButton_2->setText(QCoreApplication::translate("XyPlatform", "Angle+", nullptr));
        label_32->setText(QCoreApplication::translate("XyPlatform", "\350\275\254\345\217\2603 \350\247\222\345\272\246(\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_3->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_3->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_3->setText(QCoreApplication::translate("XyPlatform", "Angle-", nullptr));
        CurrXVelEdit_3->setText(QCoreApplication::translate("XyPlatform", "45", nullptr));
        RightButton_3->setText(QCoreApplication::translate("XyPlatform", "Angle+", nullptr));
        label_33->setText(QCoreApplication::translate("XyPlatform", "\350\275\254\345\217\2604 \350\247\222\345\272\246(\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_4->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_4->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_4->setText(QCoreApplication::translate("XyPlatform", "Angle-", nullptr));
        CurrXVelEdit_4->setText(QCoreApplication::translate("XyPlatform", "45", nullptr));
        RightButton_4->setText(QCoreApplication::translate("XyPlatform", "Angle+", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("XyPlatform", "\350\207\252\345\212\250\345\214\226\345\212\237\350\203\275", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_10->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_10->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_10->setText(QCoreApplication::translate("XyPlatform", "\345\220\270\347\233\230\345\220\270/\345\220\220\346\260\224", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_9->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_9->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_9->setText(QCoreApplication::translate("XyPlatform", "XY\350\275\264\345\271\263\345\217\260\345\233\2360", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_7->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_7->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_7->setText(QCoreApplication::translate("XyPlatform", "\345\233\236\350\275\254\346\260\224\347\274\270\350\247\222\345\272\246\345\210\207\346\215\242\357\274\210\347\224\265\347\243\201\351\230\200\351\200\232\346\226\255\347\224\265\357\274\211", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_6->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_6->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_6->setText(QCoreApplication::translate("XyPlatform", "\350\207\252\345\212\250\345\257\273\346\211\276\350\275\254\345\217\260\345\210\235\345\247\213\344\275\215\347\275\256", nullptr));
#if QT_CONFIG(tooltip)
        AutoGet16PhotosButton->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        AutoGet16PhotosButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        AutoGet16PhotosButton->setText(QCoreApplication::translate("XyPlatform", "\350\207\252\345\212\250\350\275\254\345\212\250\345\271\266\344\277\235\345\255\230\345\233\276\347\211\207\357\274\21016\345\274\240\345\233\276\357\274\211 \344\275\277\347\224\250\345\211\215\350\257\267\345\205\210\346\240\241\345\207\206\350\275\254\345\217\2600\345\272\246\344\275\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XyPlatform: public Ui_XyPlatform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XYPLATFORMUI_H
