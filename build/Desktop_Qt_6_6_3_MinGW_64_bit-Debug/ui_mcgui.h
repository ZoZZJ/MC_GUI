/********************************************************************************
** Form generated from reading UI file 'mcgui.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_McGUI
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *McGUI)
    {
        if (McGUI->objectName().isEmpty())
            McGUI->setObjectName("McGUI");
        McGUI->resize(1656, 884);
        centralwidget = new QWidget(McGUI);
        centralwidget->setObjectName("centralwidget");
        McGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(McGUI);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1656, 26));
        McGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(McGUI);
        statusbar->setObjectName("statusbar");
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
