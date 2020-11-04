#include "RunDemo.h"

RunDemo::RunDemo(QWidget* parent) : QMainWindow(parent)
{
	ui.setupUi(this);
	//实例化
	m_thread = new myThread;
	//btnOK和clicked 链接
	connect(ui.btnOK, SIGNAL(clicked()), this, SLOT(on_btnOK_Clicked()));
}

RunDemo::~RunDemo()
{
	if (m_thread)
	{
		delete m_thread;
		m_thread = NULL;
	}
}

void RunDemo::on_btnOK_Clicked()
{
	qDebug() << "MainThreadId is" << QThread::currentThreadId();
	m_thread->start();
	ui.lineEdit->setText("hello world");
}