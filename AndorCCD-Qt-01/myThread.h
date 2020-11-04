#pragma once
#include <QThread>

class myThread :public QThread
{
	Q_OBJECT
public:
	myThread();
	~myThread();
private:
	void run();
};
