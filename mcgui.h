#ifndef MCGUI_H
#define MCGUI_H

#include <QMainWindow>
#include "MultiCardCPP.h"
#include "XyPlatform.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class McGUI;
}
QT_END_NAMESPACE

class McGUI : public QMainWindow
{
    Q_OBJECT

public:
    McGUI(QWidget *parent = nullptr);
    ~McGUI();

private:
    Ui::McGUI *ui;
};
#endif // MCGUI_H
