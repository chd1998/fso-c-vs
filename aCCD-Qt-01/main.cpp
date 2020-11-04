#include "aCCDQt01.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    aCCDQt01 w;
    w.show();
    return a.exec();
}
