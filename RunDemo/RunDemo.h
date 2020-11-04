#pragma once
#include <QtWidgets/QMainWindow>
#include "ui_RunDemo.h"
#include "myThread.h"
#include <QtDebug>

class RunDemo : public QMainWindow
{
	Q_OBJECT
public:
	RunDemo(QWidget* parent = Q_NULLPTR);
	~RunDemo();

private slots:
	void on_btnOK_Clicked();

private:
	Ui::RunDemoClass ui;
	myThread* m_thread;
};