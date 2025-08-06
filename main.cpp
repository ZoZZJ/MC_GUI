#include "mcgui.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    McGUI w;
    w.show();
    return a.exec();
}
