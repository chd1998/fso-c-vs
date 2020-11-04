#include "AndorCCD01.h"
#include<QString>
#include<QImage>

AndorCCD01::AndorCCD01(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    //this->resize(1024, 768);
    int retS=initAndorCCD();
}

int AndorCCD01::initAndorCCD()
{
    ui.lineEdit_ST->setText("Data");
    ui.screen_Fits->setPixmap(QPixmap("test.jpg"));
    return 0;
}
