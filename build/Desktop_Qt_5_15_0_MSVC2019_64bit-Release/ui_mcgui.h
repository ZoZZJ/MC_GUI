/********************************************************************************
** Form generated from reading UI file 'mcgui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MCGUI_H
#define UI_MCGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_McGUI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *McGUI)
    {
        if (McGUI->objectName().isEmpty())
            McGUI->setObjectName(QString::fromUtf8("McGUI"));
        McGUI->resize(1656, 884);
        centralwidget = new QWidget(McGUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        McGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(McGUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1656, 25));
        McGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(McGUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        McGUI->setStatusBar(statusbar);

        retranslateUi(McGUI);

        QMetaObject::connectSlotsByName(McGUI);
    } // setupUi

    void retranslateUi(QMainWindow *McGUI)
    {
        McGUI->setWindowTitle(QCoreApplication::translate("McGUI", "McGUI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class McGUI: public Ui_McGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MCGUI_H
