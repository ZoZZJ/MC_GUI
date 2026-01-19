QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QMAKE_CXXFLAGS += /utf-8

CONFIG += console


# # 关掉所有优化（这是不崩的关键）
# QMAKE_CXXFLAGS_RELEASE -= -O2
# QMAKE_CXXFLAGS_RELEASE += -Od


CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


#LIBS +=C:\opencv452\x64\mingw\lib\libopencv*
#LIBS +=E:\Qt\documents\monitor_app\libmodbus\lib\release\modbus.lib
#LIBS +=E:\Qt\documents\monitor_app\libmodbus\lib\release\modbus.dll

# 指定库所在的文件夹
LIBS += "E:/MC_Controller/C++_lib/64bit/MultiCard.lib"

LIBS += -LE:/MC_Controller/Development/Libraries/win64/ \
        -lMvCameraControl





INCLUDEPATH +=  ../../C++_lib/
INCLUDEPATH +=  ../../Development/Includes/

INCLUDEPATH +=C:\opencv452\include
INCLUDEPATH += C:\opencv452\include\opencv2



SOURCES += \
    CameraController.cpp \
    CameraWidget.cpp \
    MotorController/MotionController.cpp \
    XyPlatform.cpp \
    main.cpp \
    mcgui.cpp

HEADERS += \
    ../../C++_lib/MultiCardCPP.h \
    CameraController.h \
    CameraWidget.h \
    GlobalVars.h \
    MotorController/MotionController.h \
    XyPlatform.h \
    mcgui.h

FORMS += \
    mcgui.ui \
    xyplatformUI.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    photo.qrc
