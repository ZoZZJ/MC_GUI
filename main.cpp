#include "mcgui.h"
#include <QDir>

#include <QApplication>

int main(int argc, char *argv[])
{
    QString dllPath = QCoreApplication::applicationDirPath()
    + QDir::separator()
        + "MvCameraControl";

    QCoreApplication::addLibraryPath(dllPath);

    QApplication a(argc, argv);
    McGUI w;
    w.show();
    return a.exec();
}
