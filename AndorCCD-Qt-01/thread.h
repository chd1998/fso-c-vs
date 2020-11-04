#ifndef THREAD_H
#define THREAD_H
#include<QThread>
#include<QString>

class Thread : public QThread
{
    Q_OBJECT
public:
    Thread();
    virtual void run();
    void stop();
signals:
    void send(QString msg);
private:

};

#endif // THREAD_H#pragma once
