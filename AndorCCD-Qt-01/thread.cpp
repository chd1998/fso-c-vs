#include "thread.h"

Thread::Thread()
{

}
void Thread::run()
{
    //发送一个信号给主线程
    emit send(QString(""));
}