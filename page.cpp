#include "page.h"
#include <QFont>

Page1::Page1(QWidget *parent)
{
    home = new Home;
    homeMainLay = new QHBoxLayout(this);
    homeMainLay->addWidget(home);
    setLayout(homeMainLay);
}

Page2::Page2(QWidget *parent)
{
    remoteMainLayout = new QHBoxLayout(this);
    remoteScrollArea = new QScrollArea(this);
    pWgt = new QWidget();
    //if(新增按鍵被按下且資料正確){
        remoteMainLayout->addWidget(new remotePC);
    //}
    remoteMainLayout->addWidget(new remotePC);
    remoteMainLayout->addWidget(new remotePC);
    remoteMainLayout->addWidget(new remotePC);
    remoteMainLayout->addWidget(new remotePC);
    //多的這四個記得刪掉
    pWgt->setLayout(remoteMainLayout);
    remoteScrollArea->setMinimumSize(480,560);
    remoteScrollArea->setWidget(pWgt);

}
Page3::Page3(QWidget *parent)
{
    setpage1 = new setPage1;
    setMainLayout = new QHBoxLayout();
    setTab = new QTabWidget();
    setTab->addTab(setpage1, QStringLiteral("小視窗設定"));
    setMainLayout->addWidget(setTab);
    setLayout(setMainLayout);

    //setpage1->emitDataFromSet();
    //connect(setpage1, &setPage1::sendDataFromSet,this, &Page3::recvDataAtPage3);
}
/*void Page3::emitDataFromPage3(){
    emit sendDataFromPage3(state);
}
void Page3::recvDataAtPage3(char data[8]){
    *state = *data;
}*/

Page4::Page4(QWidget *parent)
{
    QFont *font = new QFont();
    font->setPointSize(12);
    infoMainLay = new QVBoxLayout(this);
    img.load(":/image/logo.png");
    inWin = new QLabel(this);
    inWin->setScaledContents(true);
    inWin->setPixmap(QPixmap::fromImage(img));
    inWin->setMaximumSize(100,100);
    infoSpacer = new QSpacerItem(300,300,QSizePolicy::Minimum, QSizePolicy::Fixed);
    information = new QLabel();
    information->setWordWrap(true);
    information->setText(QStringLiteral("We are students.\n"
                                        "We develop this application\nfor Windows Programming Course.\n"
                                        "If you like this application, you can donate us.\n"
                                        "You can send money to the following account.\n\n"
                                        "Bank Code: 700\n"
                                        "Bank Account: 00111410163749\n"));
    information->setFont(*font);
    infoMainLay->addWidget(inWin);
    infoMainLay->addWidget(information);
    infoMainLay->addItem(infoSpacer);
    setLayout(infoMainLay);
}
