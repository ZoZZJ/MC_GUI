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
    QFrame *frame;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_15;
    QRadioButton *moveOnceBtn;
    QRadioButton *moveEndureBtn;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_11;
    QRadioButton *distance0;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *distance1;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_17;
    QRadioButton *distance2;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_18;
    QRadioButton *distance3;
    QLabel *label_17;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *vel0;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *vel1;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *vel2;
    QLabel *label_9;
    QFrame *Moveframe;
    QGridLayout *gridLayout;
    QPushButton *DownButton;
    QPushButton *EnableButton;
    QPushButton *LeftButton;
    QPushButton *CommutButton;
    QPushButton *RightButton;
    QPushButton *UpButton;
    QWidget *CameraWidget;
    QVBoxLayout *verticalLayout_19;
    QLabel *label;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout;
    QPushButton *savePhotoButton;
    QPushButton *openCameraButton;
    QLineEdit *savePathEdit;
    QLabel *label_4;
    QWidget *RotationAxisWidget;
    QHBoxLayout *horizontalLayout_19;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_23;
    QLCDNumber *YlcdNumber_2;
    QHBoxLayout *horizontalLayout_20;
    QPushButton *LeftButton_2;
    QLineEdit *CurrXVelEdit_2;
    QPushButton *RightButton_2;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_31;
    QLCDNumber *YlcdNumber_6;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *LeftButton_3;
    QLineEdit *CurrXVelEdit_3;
    QPushButton *RightButton_3;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_32;
    QLCDNumber *YlcdNumber_7;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *LeftButton_4;
    QLineEdit *CurrXVelEdit_4;
    QPushButton *RightButton_4;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_33;
    QLCDNumber *YlcdNumber_8;
    QHBoxLayout *horizontalLayout_33;
    QPushButton *LeftButton_5;
    QLineEdit *CurrXVelEdit_5;
    QPushButton *RightButton_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_20;
    QPushButton *LeftButton_6;
    QPushButton *AutoGet16PhotosButton;

    void setupUi(QWidget *XyPlatform)
    {
        if (XyPlatform->objectName().isEmpty())
            XyPlatform->setObjectName(QString::fromUtf8("XyPlatform"));
        XyPlatform->resize(1616, 1162);
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
        VelAxisChooseBox->setMaximum(1);

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
        AccAxisChooseBox->setMaximum(1);

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
        moveOnceBtn->setChecked(false);

        verticalLayout_15->addWidget(moveOnceBtn);

        moveEndureBtn = new QRadioButton(groupBox);
        moveEndureBtn->setObjectName(QString::fromUtf8("moveEndureBtn"));
        moveEndureBtn->setEnabled(true);
        sizePolicy.setHeightForWidth(moveEndureBtn->sizePolicy().hasHeightForWidth());
        moveEndureBtn->setSizePolicy(sizePolicy);
        moveEndureBtn->setChecked(true);

        verticalLayout_15->addWidget(moveEndureBtn);


        verticalLayout_18->addLayout(verticalLayout_15);


        horizontalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setFont(font1);
        verticalLayout_12 = new QVBoxLayout(groupBox_3);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        distance0 = new QRadioButton(groupBox_3);
        distance0->setObjectName(QString::fromUtf8("distance0"));
        sizePolicy3.setHeightForWidth(distance0->sizePolicy().hasHeightForWidth());
        distance0->setSizePolicy(sizePolicy3);
        distance0->setCheckable(true);
        distance0->setChecked(false);

        horizontalLayout_11->addWidget(distance0);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_11->addWidget(label_14);


        verticalLayout_12->addLayout(horizontalLayout_11);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        distance1 = new QRadioButton(groupBox_3);
        distance1->setObjectName(QString::fromUtf8("distance1"));
        sizePolicy3.setHeightForWidth(distance1->sizePolicy().hasHeightForWidth());
        distance1->setSizePolicy(sizePolicy3);
        distance1->setCheckable(true);
        distance1->setChecked(false);

        horizontalLayout_16->addWidget(distance1);

        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_16->addWidget(label_15);


        verticalLayout_12->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        distance2 = new QRadioButton(groupBox_3);
        distance2->setObjectName(QString::fromUtf8("distance2"));
        sizePolicy3.setHeightForWidth(distance2->sizePolicy().hasHeightForWidth());
        distance2->setSizePolicy(sizePolicy3);
        distance2->setCheckable(true);
        distance2->setChecked(false);

        horizontalLayout_17->addWidget(distance2);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_17->addWidget(label_16);


        verticalLayout_12->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        distance3 = new QRadioButton(groupBox_3);
        distance3->setObjectName(QString::fromUtf8("distance3"));
        sizePolicy3.setHeightForWidth(distance3->sizePolicy().hasHeightForWidth());
        distance3->setSizePolicy(sizePolicy3);
        distance3->setChecked(true);

        horizontalLayout_18->addWidget(distance3);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_18->addWidget(label_17);


        verticalLayout_12->addLayout(horizontalLayout_18);


        horizontalLayout->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setFont(font1);
        verticalLayout_16 = new QVBoxLayout(groupBox_2);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        vel0 = new QRadioButton(groupBox_2);
        vel0->setObjectName(QString::fromUtf8("vel0"));
        sizePolicy3.setHeightForWidth(vel0->sizePolicy().hasHeightForWidth());
        vel0->setSizePolicy(sizePolicy3);
        vel0->setChecked(true);

        horizontalLayout_8->addWidget(vel0);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);


        verticalLayout_16->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        vel1 = new QRadioButton(groupBox_2);
        vel1->setObjectName(QString::fromUtf8("vel1"));
        sizePolicy3.setHeightForWidth(vel1->sizePolicy().hasHeightForWidth());
        vel1->setSizePolicy(sizePolicy3);
        vel1->setLayoutDirection(Qt::LeftToRight);
        vel1->setChecked(false);

        horizontalLayout_9->addWidget(vel1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);


        verticalLayout_16->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        vel2 = new QRadioButton(groupBox_2);
        vel2->setObjectName(QString::fromUtf8("vel2"));
        sizePolicy3.setHeightForWidth(vel2->sizePolicy().hasHeightForWidth());
        vel2->setSizePolicy(sizePolicy3);
        vel2->setChecked(false);

        horizontalLayout_10->addWidget(vel2);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_10->addWidget(label_9);


        verticalLayout_16->addLayout(horizontalLayout_10);


        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_13->addLayout(horizontalLayout);

        Moveframe = new QFrame(frame);
        Moveframe->setObjectName(QString::fromUtf8("Moveframe"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Moveframe->sizePolicy().hasHeightForWidth());
        Moveframe->setSizePolicy(sizePolicy4);
        Moveframe->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 254, 254);"));
        Moveframe->setFrameShape(QFrame::NoFrame);
        gridLayout = new QGridLayout(Moveframe);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        DownButton = new QPushButton(Moveframe);
        DownButton->setObjectName(QString::fromUtf8("DownButton"));
        sizePolicy.setHeightForWidth(DownButton->sizePolicy().hasHeightForWidth());
        DownButton->setSizePolicy(sizePolicy);
        DownButton->setMinimumSize(QSize(0, 0));
        DownButton->setMaximumSize(QSize(999999, 99999));
        DownButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/photos/DownArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        DownButton->setIcon(icon);
        DownButton->setIconSize(QSize(110, 110));

        gridLayout->addWidget(DownButton, 2, 1, 1, 1);

        EnableButton = new QPushButton(Moveframe);
        EnableButton->setObjectName(QString::fromUtf8("EnableButton"));
        sizePolicy.setHeightForWidth(EnableButton->sizePolicy().hasHeightForWidth());
        EnableButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(EnableButton, 1, 1, 1, 1);

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

        CommutButton = new QPushButton(Moveframe);
        CommutButton->setObjectName(QString::fromUtf8("CommutButton"));
        sizePolicy.setHeightForWidth(CommutButton->sizePolicy().hasHeightForWidth());
        CommutButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(CommutButton, 0, 0, 1, 1);

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

        UpButton = new QPushButton(Moveframe);
        UpButton->setObjectName(QString::fromUtf8("UpButton"));
        sizePolicy.setHeightForWidth(UpButton->sizePolicy().hasHeightForWidth());
        UpButton->setSizePolicy(sizePolicy);
        UpButton->setMinimumSize(QSize(0, 0));
        UpButton->setMaximumSize(QSize(90000, 999999));
        UpButton->setFocusPolicy(Qt::NoFocus);
        UpButton->setLayoutDirection(Qt::LeftToRight);
        UpButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/photos/UpArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        UpButton->setIcon(icon3);
        UpButton->setIconSize(QSize(110, 110));

        gridLayout->addWidget(UpButton, 0, 1, 1, 1);


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

        savePathEdit = new QLineEdit(groupBox_5);
        savePathEdit->setObjectName(QString::fromUtf8("savePathEdit"));

        verticalLayout->addWidget(savePathEdit);

        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        verticalLayout_19->addWidget(groupBox_5);


        horizontalLayout_6->addWidget(CameraWidget);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 4);
        horizontalLayout_6->setStretch(2, 4);

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

        YlcdNumber_2 = new QLCDNumber(widget_3);
        YlcdNumber_2->setObjectName(QString::fromUtf8("YlcdNumber_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(YlcdNumber_2->sizePolicy().hasHeightForWidth());
        YlcdNumber_2->setSizePolicy(sizePolicy5);
        YlcdNumber_2->setMinimumSize(QSize(0, 0));
        YlcdNumber_2->setMaximumSize(QSize(9999, 99999));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Arabic"));
        font2.setPointSize(7);
        YlcdNumber_2->setFont(font2);
        YlcdNumber_2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        YlcdNumber_2->setSmallDecimalPoint(true);
        YlcdNumber_2->setDigitCount(5);
        YlcdNumber_2->setProperty("value", QVariant(0.000000000000000));
        YlcdNumber_2->setProperty("intValue", QVariant(0));

        horizontalLayout_26->addWidget(YlcdNumber_2);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        LeftButton_2 = new QPushButton(widget_3);
        LeftButton_2->setObjectName(QString::fromUtf8("LeftButton_2"));
        sizePolicy.setHeightForWidth(LeftButton_2->sizePolicy().hasHeightForWidth());
        LeftButton_2->setSizePolicy(sizePolicy);
        LeftButton_2->setMinimumSize(QSize(0, 0));
        LeftButton_2->setMaximumSize(QSize(99999, 99999));
        LeftButton_2->setStyleSheet(QString::fromUtf8(""));
        LeftButton_2->setIcon(icon1);
        LeftButton_2->setIconSize(QSize(110, 110));

        horizontalLayout_20->addWidget(LeftButton_2);

        CurrXVelEdit_2 = new QLineEdit(widget_3);
        CurrXVelEdit_2->setObjectName(QString::fromUtf8("CurrXVelEdit_2"));
        sizePolicy.setHeightForWidth(CurrXVelEdit_2->sizePolicy().hasHeightForWidth());
        CurrXVelEdit_2->setSizePolicy(sizePolicy);
        CurrXVelEdit_2->setMinimumSize(QSize(0, 0));
        CurrXVelEdit_2->setMaximumSize(QSize(120, 60));
        CurrXVelEdit_2->setReadOnly(true);

        horizontalLayout_20->addWidget(CurrXVelEdit_2);

        RightButton_2 = new QPushButton(widget_3);
        RightButton_2->setObjectName(QString::fromUtf8("RightButton_2"));
        sizePolicy.setHeightForWidth(RightButton_2->sizePolicy().hasHeightForWidth());
        RightButton_2->setSizePolicy(sizePolicy);
        RightButton_2->setMinimumSize(QSize(0, 0));
        RightButton_2->setMaximumSize(QSize(99999, 999999));
        RightButton_2->setStyleSheet(QString::fromUtf8(""));
        RightButton_2->setIcon(icon2);
        RightButton_2->setIconSize(QSize(110, 110));

        horizontalLayout_20->addWidget(RightButton_2);


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

        YlcdNumber_6 = new QLCDNumber(widget_3);
        YlcdNumber_6->setObjectName(QString::fromUtf8("YlcdNumber_6"));
        sizePolicy5.setHeightForWidth(YlcdNumber_6->sizePolicy().hasHeightForWidth());
        YlcdNumber_6->setSizePolicy(sizePolicy5);
        YlcdNumber_6->setMinimumSize(QSize(0, 0));
        YlcdNumber_6->setMaximumSize(QSize(9999, 99999));
        YlcdNumber_6->setFont(font2);
        YlcdNumber_6->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        YlcdNumber_6->setSmallDecimalPoint(true);
        YlcdNumber_6->setDigitCount(5);
        YlcdNumber_6->setProperty("value", QVariant(0.000000000000000));
        YlcdNumber_6->setProperty("intValue", QVariant(0));

        horizontalLayout_30->addWidget(YlcdNumber_6);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        LeftButton_3 = new QPushButton(widget_3);
        LeftButton_3->setObjectName(QString::fromUtf8("LeftButton_3"));
        sizePolicy.setHeightForWidth(LeftButton_3->sizePolicy().hasHeightForWidth());
        LeftButton_3->setSizePolicy(sizePolicy);
        LeftButton_3->setMinimumSize(QSize(0, 0));
        LeftButton_3->setMaximumSize(QSize(99999, 99999));
        LeftButton_3->setStyleSheet(QString::fromUtf8(""));
        LeftButton_3->setIcon(icon1);
        LeftButton_3->setIconSize(QSize(110, 110));

        horizontalLayout_21->addWidget(LeftButton_3);

        CurrXVelEdit_3 = new QLineEdit(widget_3);
        CurrXVelEdit_3->setObjectName(QString::fromUtf8("CurrXVelEdit_3"));
        sizePolicy.setHeightForWidth(CurrXVelEdit_3->sizePolicy().hasHeightForWidth());
        CurrXVelEdit_3->setSizePolicy(sizePolicy);
        CurrXVelEdit_3->setMinimumSize(QSize(0, 0));
        CurrXVelEdit_3->setMaximumSize(QSize(120, 60));
        CurrXVelEdit_3->setReadOnly(true);

        horizontalLayout_21->addWidget(CurrXVelEdit_3);

        RightButton_3 = new QPushButton(widget_3);
        RightButton_3->setObjectName(QString::fromUtf8("RightButton_3"));
        sizePolicy.setHeightForWidth(RightButton_3->sizePolicy().hasHeightForWidth());
        RightButton_3->setSizePolicy(sizePolicy);
        RightButton_3->setMinimumSize(QSize(0, 0));
        RightButton_3->setMaximumSize(QSize(99999, 999999));
        RightButton_3->setStyleSheet(QString::fromUtf8(""));
        RightButton_3->setIcon(icon2);
        RightButton_3->setIconSize(QSize(110, 110));

        horizontalLayout_21->addWidget(RightButton_3);


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

        YlcdNumber_7 = new QLCDNumber(widget_3);
        YlcdNumber_7->setObjectName(QString::fromUtf8("YlcdNumber_7"));
        sizePolicy5.setHeightForWidth(YlcdNumber_7->sizePolicy().hasHeightForWidth());
        YlcdNumber_7->setSizePolicy(sizePolicy5);
        YlcdNumber_7->setMinimumSize(QSize(0, 0));
        YlcdNumber_7->setMaximumSize(QSize(9999, 99999));
        YlcdNumber_7->setFont(font2);
        YlcdNumber_7->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        YlcdNumber_7->setSmallDecimalPoint(true);
        YlcdNumber_7->setDigitCount(5);
        YlcdNumber_7->setProperty("value", QVariant(0.000000000000000));
        YlcdNumber_7->setProperty("intValue", QVariant(0));

        horizontalLayout_31->addWidget(YlcdNumber_7);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        LeftButton_4 = new QPushButton(widget_3);
        LeftButton_4->setObjectName(QString::fromUtf8("LeftButton_4"));
        sizePolicy.setHeightForWidth(LeftButton_4->sizePolicy().hasHeightForWidth());
        LeftButton_4->setSizePolicy(sizePolicy);
        LeftButton_4->setMinimumSize(QSize(0, 0));
        LeftButton_4->setMaximumSize(QSize(99999, 99999));
        LeftButton_4->setStyleSheet(QString::fromUtf8(""));
        LeftButton_4->setIcon(icon1);
        LeftButton_4->setIconSize(QSize(110, 110));

        horizontalLayout_23->addWidget(LeftButton_4);

        CurrXVelEdit_4 = new QLineEdit(widget_3);
        CurrXVelEdit_4->setObjectName(QString::fromUtf8("CurrXVelEdit_4"));
        sizePolicy.setHeightForWidth(CurrXVelEdit_4->sizePolicy().hasHeightForWidth());
        CurrXVelEdit_4->setSizePolicy(sizePolicy);
        CurrXVelEdit_4->setMinimumSize(QSize(0, 0));
        CurrXVelEdit_4->setMaximumSize(QSize(120, 60));
        CurrXVelEdit_4->setReadOnly(true);

        horizontalLayout_23->addWidget(CurrXVelEdit_4);

        RightButton_4 = new QPushButton(widget_3);
        RightButton_4->setObjectName(QString::fromUtf8("RightButton_4"));
        sizePolicy.setHeightForWidth(RightButton_4->sizePolicy().hasHeightForWidth());
        RightButton_4->setSizePolicy(sizePolicy);
        RightButton_4->setMinimumSize(QSize(0, 0));
        RightButton_4->setMaximumSize(QSize(99999, 999999));
        RightButton_4->setStyleSheet(QString::fromUtf8(""));
        RightButton_4->setIcon(icon2);
        RightButton_4->setIconSize(QSize(110, 110));

        horizontalLayout_23->addWidget(RightButton_4);


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

        YlcdNumber_8 = new QLCDNumber(widget_3);
        YlcdNumber_8->setObjectName(QString::fromUtf8("YlcdNumber_8"));
        sizePolicy5.setHeightForWidth(YlcdNumber_8->sizePolicy().hasHeightForWidth());
        YlcdNumber_8->setSizePolicy(sizePolicy5);
        YlcdNumber_8->setMinimumSize(QSize(0, 0));
        YlcdNumber_8->setMaximumSize(QSize(9999, 99999));
        YlcdNumber_8->setFont(font2);
        YlcdNumber_8->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        YlcdNumber_8->setSmallDecimalPoint(true);
        YlcdNumber_8->setDigitCount(5);
        YlcdNumber_8->setProperty("value", QVariant(0.000000000000000));
        YlcdNumber_8->setProperty("intValue", QVariant(0));

        horizontalLayout_32->addWidget(YlcdNumber_8);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        LeftButton_5 = new QPushButton(widget_3);
        LeftButton_5->setObjectName(QString::fromUtf8("LeftButton_5"));
        sizePolicy.setHeightForWidth(LeftButton_5->sizePolicy().hasHeightForWidth());
        LeftButton_5->setSizePolicy(sizePolicy);
        LeftButton_5->setMinimumSize(QSize(0, 0));
        LeftButton_5->setMaximumSize(QSize(99999, 99999));
        LeftButton_5->setStyleSheet(QString::fromUtf8(""));
        LeftButton_5->setIcon(icon1);
        LeftButton_5->setIconSize(QSize(110, 110));

        horizontalLayout_33->addWidget(LeftButton_5);

        CurrXVelEdit_5 = new QLineEdit(widget_3);
        CurrXVelEdit_5->setObjectName(QString::fromUtf8("CurrXVelEdit_5"));
        sizePolicy.setHeightForWidth(CurrXVelEdit_5->sizePolicy().hasHeightForWidth());
        CurrXVelEdit_5->setSizePolicy(sizePolicy);
        CurrXVelEdit_5->setMinimumSize(QSize(0, 0));
        CurrXVelEdit_5->setMaximumSize(QSize(120, 60));
        CurrXVelEdit_5->setReadOnly(true);

        horizontalLayout_33->addWidget(CurrXVelEdit_5);

        RightButton_5 = new QPushButton(widget_3);
        RightButton_5->setObjectName(QString::fromUtf8("RightButton_5"));
        sizePolicy.setHeightForWidth(RightButton_5->sizePolicy().hasHeightForWidth());
        RightButton_5->setSizePolicy(sizePolicy);
        RightButton_5->setMinimumSize(QSize(0, 0));
        RightButton_5->setMaximumSize(QSize(99999, 999999));
        RightButton_5->setStyleSheet(QString::fromUtf8(""));
        RightButton_5->setIcon(icon2);
        RightButton_5->setIconSize(QSize(110, 110));

        horizontalLayout_33->addWidget(RightButton_5);


        horizontalLayout_32->addLayout(horizontalLayout_33);

        horizontalLayout_32->setStretch(0, 1);
        horizontalLayout_32->setStretch(1, 2);
        horizontalLayout_32->setStretch(2, 2);

        verticalLayout_14->addLayout(horizontalLayout_32);


        horizontalLayout_19->addWidget(widget_3);

        groupBox_4 = new QGroupBox(RotationAxisWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_20 = new QVBoxLayout(groupBox_4);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        LeftButton_6 = new QPushButton(groupBox_4);
        LeftButton_6->setObjectName(QString::fromUtf8("LeftButton_6"));
        sizePolicy.setHeightForWidth(LeftButton_6->sizePolicy().hasHeightForWidth());
        LeftButton_6->setSizePolicy(sizePolicy);
        LeftButton_6->setMinimumSize(QSize(0, 0));
        LeftButton_6->setMaximumSize(QSize(99999, 99999));
        LeftButton_6->setStyleSheet(QString::fromUtf8(""));
        LeftButton_6->setIcon(icon1);
        LeftButton_6->setIconSize(QSize(110, 110));

        verticalLayout_20->addWidget(LeftButton_6);

        AutoGet16PhotosButton = new QPushButton(groupBox_4);
        AutoGet16PhotosButton->setObjectName(QString::fromUtf8("AutoGet16PhotosButton"));
        sizePolicy.setHeightForWidth(AutoGet16PhotosButton->sizePolicy().hasHeightForWidth());
        AutoGet16PhotosButton->setSizePolicy(sizePolicy);
        AutoGet16PhotosButton->setMinimumSize(QSize(0, 0));
        AutoGet16PhotosButton->setMaximumSize(QSize(99999, 99999));
        AutoGet16PhotosButton->setStyleSheet(QString::fromUtf8(""));
        AutoGet16PhotosButton->setIcon(icon1);
        AutoGet16PhotosButton->setIconSize(QSize(110, 110));

        verticalLayout_20->addWidget(AutoGet16PhotosButton);


        horizontalLayout_19->addWidget(groupBox_4);

        horizontalLayout_19->setStretch(0, 2);
        horizontalLayout_19->setStretch(1, 1);

        verticalLayout_11->addWidget(RotationAxisWidget);

        verticalLayout_11->setStretch(0, 3);

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
        groupBox->setTitle(QCoreApplication::translate("XyPlatform", "\346\250\241\345\274\217\351\200\211\346\213\251", nullptr));
        moveOnceBtn->setText(QCoreApplication::translate("XyPlatform", "\347\202\271\346\214\211\346\255\245\350\277\233", nullptr));
        moveEndureBtn->setText(QCoreApplication::translate("XyPlatform", "\346\214\201\347\273\255\347\247\273\345\212\250", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("XyPlatform", "\346\255\245\350\277\233\350\267\235\347\246\273", nullptr));
        distance0->setText(QCoreApplication::translate("XyPlatform", "0.01", nullptr));
        label_14->setText(QCoreApplication::translate("XyPlatform", "mm/s", nullptr));
        distance1->setText(QCoreApplication::translate("XyPlatform", "0.1", nullptr));
        label_15->setText(QCoreApplication::translate("XyPlatform", "mm/s", nullptr));
        distance2->setText(QCoreApplication::translate("XyPlatform", "1", nullptr));
        label_16->setText(QCoreApplication::translate("XyPlatform", "mm/s", nullptr));
        distance3->setText(QCoreApplication::translate("XyPlatform", "10", nullptr));
        label_17->setText(QCoreApplication::translate("XyPlatform", "mm/s", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("XyPlatform", "\351\200\237\345\272\246\351\200\211\346\213\251", nullptr));
        vel0->setText(QCoreApplication::translate("XyPlatform", "10", nullptr));
        label_7->setText(QCoreApplication::translate("XyPlatform", "mm/s", nullptr));
        vel1->setText(QCoreApplication::translate("XyPlatform", "20", nullptr));
        label_8->setText(QCoreApplication::translate("XyPlatform", "mm/s", nullptr));
        vel2->setText(QCoreApplication::translate("XyPlatform", " 40", nullptr));
        label_9->setText(QCoreApplication::translate("XyPlatform", "mm/s", nullptr));
        DownButton->setText(QCoreApplication::translate("XyPlatform", "Y-", nullptr));
        EnableButton->setText(QCoreApplication::translate("XyPlatform", "\344\275\277\350\203\275", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton->setText(QCoreApplication::translate("XyPlatform", "X-", nullptr));
        CommutButton->setText(QCoreApplication::translate("XyPlatform", "\346\215\242\345\220\221", nullptr));
        RightButton->setText(QCoreApplication::translate("XyPlatform", "X+", nullptr));
        UpButton->setText(QCoreApplication::translate("XyPlatform", "Y+", nullptr));
        label->setText(QCoreApplication::translate("XyPlatform", "\345\233\276\347\211\207\345\261\225\347\244\272", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("XyPlatform", "\345\212\237\350\203\275\351\200\211\346\213\251", nullptr));
        savePhotoButton->setText(QCoreApplication::translate("XyPlatform", "\344\277\235\345\255\230\345\233\276\347\211\207", nullptr));
        openCameraButton->setText(QCoreApplication::translate("XyPlatform", "\346\211\223\345\274\200\347\233\270\346\234\272", nullptr));
        savePathEdit->setText(QCoreApplication::translate("XyPlatform", "\344\277\235\345\255\230\350\267\257\345\276\204\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("XyPlatform", "\346\241\214\351\235\242", nullptr));
        label_23->setText(QCoreApplication::translate("XyPlatform", "\350\275\254\345\217\2601 \350\247\222\345\272\246(\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_2->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_2->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_2->setText(QCoreApplication::translate("XyPlatform", "Angle-", nullptr));
        CurrXVelEdit_2->setText(QCoreApplication::translate("XyPlatform", "0", nullptr));
        RightButton_2->setText(QCoreApplication::translate("XyPlatform", "Angle+", nullptr));
        label_31->setText(QCoreApplication::translate("XyPlatform", "\350\275\254\345\217\2602 \350\247\222\345\272\246(\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_3->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_3->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_3->setText(QCoreApplication::translate("XyPlatform", "Angle-", nullptr));
        CurrXVelEdit_3->setText(QCoreApplication::translate("XyPlatform", "0", nullptr));
        RightButton_3->setText(QCoreApplication::translate("XyPlatform", "Angle+", nullptr));
        label_32->setText(QCoreApplication::translate("XyPlatform", "\350\275\254\345\217\2603 \350\247\222\345\272\246(\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_4->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_4->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_4->setText(QCoreApplication::translate("XyPlatform", "Angle-", nullptr));
        CurrXVelEdit_4->setText(QCoreApplication::translate("XyPlatform", "0", nullptr));
        RightButton_4->setText(QCoreApplication::translate("XyPlatform", "Angle+", nullptr));
        label_33->setText(QCoreApplication::translate("XyPlatform", "\350\275\254\345\217\2604 \350\247\222\345\272\246(\302\260)", nullptr));
#if QT_CONFIG(tooltip)
        LeftButton_5->setToolTip(QCoreApplication::translate("XyPlatform", "\345\220\221\345\267\246\347\247\273\345\212\250", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        LeftButton_5->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        LeftButton_5->setText(QCoreApplication::translate("XyPlatform", "Angle-", nullptr));
        CurrXVelEdit_5->setText(QCoreApplication::translate("XyPlatform", "0", nullptr));
        RightButton_5->setText(QCoreApplication::translate("XyPlatform", "Angle+", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("XyPlatform", "\350\207\252\345\212\250\345\214\226\345\212\237\350\203\275", nullptr));
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
