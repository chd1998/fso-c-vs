#include "opencvtest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    opencvtest w;
    w.show();
    return a.exec();
}
