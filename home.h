#ifndef HOME_H
#define HOME_H

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
#include <QTimer>
#include <windows.h>
#include <pdh.h>
#include <vector>
#include <wbemidl.h>
#include <comdef.h>
#include <QProcess>
#include <QStringList>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>

//#pragma comment(lib, "wbemuuid.lib")

class Home : public QWidget
{

public:
    Home(QWidget *parent = 0);
    ~Home();
    QCheckBox       *vCheckBox;
private slots:
    void updatePerformanceData();
    //void fetchHardwareData();

private:
    void initializePerformanceCounters();
    double getCpuTemperature();
    double getCpuClock();
    double getMemoryUsage();
    double getDiskUsage();

    //void initializeWMI();
    //void cleanupWMI();

    QNetworkAccessManager *networkManager;
    void parseHardwareData(QNetworkReply *reply);

    QHBoxLayout     *homeMainLay;
    QVBoxLayout     *homeleftLay;
    QVBoxLayout     *homerightLay;

    QGroupBox       *localPCGruop;
    QVBoxLayout     *pcGroupLay;
    QHBoxLayout     *pcGrp_01;
    QHBoxLayout     *pcGrp_02;
    QHBoxLayout     *pcGrp_03;
    QHBoxLayout     *pcGrp_04;
    QHBoxLayout     *pcGrp_05;
    QHBoxLayout     *pcGrp_06;
    QHBoxLayout     *pcGrp_07;
    QHBoxLayout     *pcGrp_08;
    QSpacerItem     *pcSpacer;
    QSpacerItem     *pcGrpSpa_01;
    QSpacerItem     *pcGrpSpa_02;
    QSpacerItem     *pcGrpSpa_03;
    QSpacerItem     *pcGrpSpa_04;
    QSpacerItem     *pcGrpSpa_05;
    QSpacerItem     *pcGrpSpa_06;
    QSpacerItem     *pcGrpSpa_07;
    QSpacerItem     *pcGrpSpa_08;
    QLabel          *hplpgrp_01;
    QLabel          *hplpgrp_02;
    QLabel          *hplpgrp_03;
    QLabel          *hplpgrp_04;
    QLabel          *hplpgrp_05;
    QLabel          *hplpgrp_06;
    QLabel          *hplpgrp_07;
    QLabel          *hplpgrp_08;
    QLabel          *hplpgrp_09;
    QLabel          *hplpgrp_10;
    QLabel          *hplpgrp_11;
    QLabel          *hplpgrp_12;
    QLabel          *hplpgrp_13;
    QLabel          *hplpgrp_14;
    QLabel          *hplpgrp_15;
    QLabel          *hplpgrp_16;
    QLCDNumber      *hplcd_01;      //顯示CPU使用率
    QLCDNumber      *hplcd_02;      //顯示CPU溫度
    QLCDNumber      *hplcd_03;      //顯示CPU時脈
    QLCDNumber      *hplcd_04;      //顯示GPU使用率
    QLCDNumber      *hplcd_05;      //顯示GPU溫度
    QLCDNumber      *hplcd_06;      //顯示CPU時脈
    QLCDNumber      *hplcd_07;      //顯示memory使用率
    QLCDNumber      *hplcd_08;      //顯示desk使用率


    QGroupBox       *infoGroup;
    QVBoxLayout     *infoGrpLay;
    QHBoxLayout     *infoGrp_01;
    QHBoxLayout     *infoGrp_02;
    QLabel          *infgrp_01;
    QLabel          *infgrp_02;
    QLabel          *infgrp_03;
    QLineEdit       *infle_01;      //顯示本機IP(port)
    QLineEdit       *infle_02;      //顯示本機密碼(隨機生成)
    QCheckBox       *infCheckBox;   //允許連線選項
    QTextBrowser    *infTextBrowser;//顯示已連線至本機的遠端IP(port)

    QGroupBox       *connectGroup;
    QVBoxLayout     *conGrpLay;
    QLabel          *congrp_01;
    QLabel          *congrp_02;
    QLabel          *congrp_03;
    QLineEdit       *conle_01;      //輸入遠端電腦IP
    QLineEdit       *conle_02;      //輸入遠端電腦Port
    QLineEdit       *conle_03;      //輸入遠端電腦Password
    QPushButton     *connectBtn;    //建立遠端電腦連線

    QTimer *updateTimer;

    HQUERY cpuQuery;
    HCOUNTER cpuCounter;

    /*IWbemServices *pSvc = nullptr;
    IWbemLocator  *pLoc = nullptr;
    HRESULT hRes;*/
};

#endif // HOME_H
