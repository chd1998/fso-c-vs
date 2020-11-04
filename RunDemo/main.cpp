#include "RunDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RunDemo w;
    w.show();
    return a.exec();
}
