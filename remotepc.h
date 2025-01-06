#ifndef REMOTEPC_H
#define REMOTEPC_H

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
#include <QFont>
#include <QObject>

class remotePC : public QWidget
{

public:
    remotePC(QWidget *paraent = 0);
private:
    QHBoxLayout     *remoteMain;
    QGroupBox       *remotePCGroup;
    QVBoxLayout     *remotePCLay;
    QHBoxLayout     *repclay_01;
    QHBoxLayout     *repclay_02;
    QHBoxLayout     *repclay_03;
    QHBoxLayout     *repclay_04;
    QHBoxLayout     *repclay_05;
    QHBoxLayout     *repclay_06;
    QHBoxLayout     *repclay_07;
    QHBoxLayout     *repclay_08;
    QHBoxLayout     *repclay_09;
    QHBoxLayout     *repclay_10;
    QSpacerItem     *remoteItem;
    QSpacerItem     *repclasp_01;
    QSpacerItem     *repclasp_02;
    QSpacerItem     *repclasp_03;
    QSpacerItem     *repclasp_04;
    QSpacerItem     *repclasp_05;
    QSpacerItem     *repclasp_06;
    QSpacerItem     *repclasp_07;
    QSpacerItem     *repclasp_08;
    QSpacerItem     *repclasp_09;
    QSpacerItem     *repclasp_10;
    QLabel          *remotePCLa_01;
    QLabel          *remotePCLa_02;
    QLabel          *remotePCLa_03;
    QLabel          *remotePCLa_04;
    QLabel          *remotePCLa_05;
    QLabel          *remotePCLa_06;
    QLabel          *remotePCLa_07;
    QLabel          *remotePCLa_08;
    QLabel          *remotePCLa_09;
    QLabel          *remotePCLa_10;
    QLabel          *remotePCLa_11;
    QLabel          *remotePCLa_12;
    QLabel          *remotePCLa_13;
    QLabel          *remotePCLa_14;
    QLabel          *remotePCLa_15;
    QLabel          *remotePCLa_16;
    QLabel          *remotePCLa_17;
    QLabel          *remotePCLa_18;
    QLabel          *remotePCLa_19;
    QLabel          *remotePCLa_20;
    QLCDNumber      *remoteLCD_01;
    QLCDNumber      *remoteLCD_02;      //顯示遠端電腦IP(Port)
    QLCDNumber      *remoteLCD_03;      //顯示遠端電腦CPU使用率
    QLCDNumber      *remoteLCD_04;      //顯示遠端電腦CPU溫度
    QLCDNumber      *remoteLCD_05;      //顯示遠端電腦CPU時脈
    QLCDNumber      *remoteLCD_06;      //顯示遠端電腦GPU使用率
    QLCDNumber      *remoteLCD_07;      //顯示遠端電腦GPU溫度
    QLCDNumber      *remoteLCD_08;      //顯示遠端電腦GPU時脈
    QLCDNumber      *remoteLCD_09;      //顯示遠端電腦網路使用量
    QWidget         *state;             //顯示連線狀態(連線綠燈、斷線紅燈)
    QFont *font;
};

#endif // REMOTEPC_H
