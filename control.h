#ifndef CONTROL_H
#define CONTROL_H

#include <QWidget>
#include <QObject>
#include "lab.h"
#include "airwindow.h"

class control : public QWidget
{
    Q_OBJECT
public:
    control(QWidget *parent = 0);

    Lab lab;
    airWindow airwindow;
    bool state;
    bool winset[8];
private slots:
    void review();
};

#endif // CONTROL_H
