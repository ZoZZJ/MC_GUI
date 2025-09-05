#include "mcgui.h"
#include "ui_mcgui.h"

McGUI::McGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::McGUI)
{
    ui->setupUi(this);
    // 创建 central widget 和布局
    QWidget *central = new QWidget(this);
    QHBoxLayout *layout = new QHBoxLayout(central);

    // 直接用 new 创建 XyPlatform 实例
    XyPlatform *xyPlatformWidget = new XyPlatform(this); // 传 this 作为父对象，方便管理内存

    layout->addWidget(xyPlatformWidget);
    setCentralWidget(central);

}

McGUI::~McGUI()
{
    delete ui;
}
