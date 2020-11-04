#include "AndorCCDQt01.h"

AndorCCDQt01::AndorCCDQt01(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    int retS = initAndorCCD();

}

int AndorCCDQt01::initAndorCCD()
{
    ui.lineEdit_ST->setText("d:\\Data");
    return 0;
}