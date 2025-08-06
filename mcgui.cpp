#include "mcgui.h"
#include "ui_mcgui.h"

McGUI::McGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::McGUI)
{
    ui->setupUi(this);
}

McGUI::~McGUI()
{
    delete ui;
}
