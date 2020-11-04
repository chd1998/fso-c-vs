#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtffmpegdemo01.h"

class qtffmpegdemo01 : public QMainWindow
{
	Q_OBJECT

public:
	qtffmpegdemo01(QWidget *parent = Q_NULLPTR);

private:
	Ui::qtffmpegdemo01Class ui;
};
