#include "myThread.h"
#include <QDebug>

myThread::myThread()
{
}
myThread::~myThread()
{
}
//��дrun����
void myThread::run()
{
	qDebug() << "currentThreadId is" << QThread::currentThreadId();
	//Todo�˴���д����,�˴�����forѭ�����档���Ը��������幦��
	for (int i = 0; i < 100; i++)
	{
		;
	}
	qDebug() << "currentThreadId " << QThread::currentThreadId() << "run to end";
}