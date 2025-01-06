#ifndef PAGE_H
#define PAGE_H

#include <QWidget>
#include <QPushButton>
#include <QCheckBox>
#include <QLabel>
#include <QLCDNumber>
#include <QGroupBox>
#include <QLineEdit>
#include <QTextBrowser>
#include <QSpacerItem>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QImage>
#include <QPixmap>
#include <QTabWidget>
#include <QScrollArea>
#include <QObject>

#include "home.h"
#include "remotepc.h"
#include "set.h"

class Page1 : public QWidget{

public:
    Page1(QWidget *paraent = 0);
    Home *home;
private:
    QHBoxLayout     *homeMainLay;
};

class Page2 : public QWidget{
public:
    Page2(QWidget *paraent = 0);

    QScrollArea     *remoteScrollArea;
    QHBoxLayout     *remoteMainLayout;
    QWidget         *pWgt;
};

class Page3 : public QWidget{
public:
    Page3(QWidget *paraent = 0);

    //char state[8];
    //void emitDataFromPage3();
    setPage1 *setpage1;
    QHBoxLayout     *setMainLayout;
    QTabWidget      *setTab;
signals:
    //void sendDataFromPage3(char state[8]);
public slots:
    //void recvDataAtPage3(char state[8]);
};


class Page4 : public QWidget{
public:
    Page4(QWidget *paraent = 0);
private:
    QVBoxLayout     *infoMainLay;
    QLabel          *information;
    QLabel          *inWin;
    QImage          img;
    QSpacerItem     *infoSpacer;
};


#endif // PAGE_H
