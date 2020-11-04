#include "AndorCCD01.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AndorCCD01 w;
    w.show();
    return a.exec();
}
