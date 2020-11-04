#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_aCCDQt01.h"

class aCCDQt01 : public QMainWindow
{
    Q_OBJECT

public:
    aCCDQt01(QWidget *parent = Q_NULLPTR);

private:
    Ui::aCCDQt01Class ui;
};
