#include "myThread.h"
#include <QDebug>

myThread::myThread()
{
}
myThread::~myThread()
{
}
//重写run函数
void myThread::run()
{
	qDebug() << "currentThreadId is" << QThread::currentThreadId();
	//Todo此处重写功能,此处用了for循环代替。可以根据需求定义功能
	for (int i = 0; i < 100; i++)
	{
		;
	}
	qDebug() << "currentThreadId " << QThread::currentThreadId() << "run to end";
}