#include "mytimer.h"
#include <QtCore>
#include <QDebug>
#include "mainwindow.h"
#include "globals.h"

MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MySlot()));
    timer->start(1000);

}

void MyTimer::MySlot()
{
    qDebug() << "Timer Executed";
    millisTime++;
    qDebug() << millisTime;

}
