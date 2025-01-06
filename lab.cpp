#include "lab.h"

#include <QFont>
#include <QDebug>

Lab::Lab(QWidget *parent) : QWidget(parent)
{
    page1 = new Page1;
    page2 = new Page2;
    page3 = new Page3;
    page4 = new Page4;

    QFont *font = new QFont();
    font->setPointSize(10);
    font->setBold(true);
    img.load(":/image/Icon.png");
    //MainLayout
    mainLayout = new QHBoxLayout(this);
    leftLayout = new QVBoxLayout(this);

    homeBtn = new QPushButton(QStringLiteral("Home"));
    remoteBtn = new QPushButton(QStringLiteral("Remote"));
    setBtn = new QPushButton(QStringLiteral("Setting"));
    infoBtn = new QPushButton(QStringLiteral("About Us"));
    homeBtn->setFont(*font);
    remoteBtn->setFont(*font);
    setBtn->setFont(*font);
    infoBtn->setFont(*font);
    homeBtn->setFixedSize(90,40);
    remoteBtn->setFixedSize(90,40);
    setBtn->setFixedSize(90,40);
    infoBtn->setFixedSize(90,40);

    vSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

    homeStk = new QStackedWidget();
    homeStk->setMinimumSize(500,500);
    homeStk->addWidget(page1);
    homeStk->addWidget(page2);
    homeStk->addWidget(page3);
    homeStk->addWidget(page4);

    inWin = new QLabel(this);
    inWin->setScaledContents(true);
    inWin->setPixmap(QPixmap::fromImage(img));
    inWin->setMaximumSize(90,90);

    leftLayout->addWidget(inWin);
    leftLayout->addWidget(homeBtn);
    leftLayout->addWidget(remoteBtn);
    leftLayout->addWidget(setBtn);
    leftLayout->addWidget(infoBtn);
    leftLayout->addItem(vSpacer);
    mainLayout->addLayout(leftLayout);
    mainLayout->addWidget(homeStk);

    connect(homeBtn, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(remoteBtn, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(setBtn, SIGNAL(clicked()), this, SLOT(switchPage()));
    connect(infoBtn, SIGNAL(clicked()), this, SLOT(switchPage()));
    //page3->emitDataFromPage3();
    //connect(page3, &Page3::sendDataFromPage3,this, &Lab::recvDataAtLab_02);
}

Lab::~Lab()
{
}

void Lab::switchPage(){
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button==homeBtn)
        homeStk->setCurrentIndex(0);
    else if(button==remoteBtn)
        homeStk->setCurrentIndex(1);
    else if(button==setBtn)
        homeStk->setCurrentIndex(2);
    else if(button==infoBtn)
        homeStk->setCurrentIndex(3);
}
/*
void Lab::emitDataFromLab_02(){
    emit sendDataFromLab_02(sdata);
}

void Lab::recvDataAtLab_02(char data[8]){
    *sdata=*data;
}*/
