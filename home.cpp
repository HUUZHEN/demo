#include "home.h"
#include <QFont>
#include <QDebug>

Home::Home(QWidget *parent)
    : QWidget(parent)
{
    QFont *font = new QFont();
    font->setPointSize(12);
    homeMainLay = new QHBoxLayout(this);
    homeleftLay = new QVBoxLayout(this);
    homerightLay = new QVBoxLayout(this);

    localPCGruop = new QGroupBox(QStringLiteral("本機電腦"), this);
    pcGroupLay = new QVBoxLayout(localPCGruop);
    pcGrp_01 = new QHBoxLayout(this);
    pcGrp_02 = new QHBoxLayout(this);
    pcGrp_03 = new QHBoxLayout(this);
    pcGrp_04 = new QHBoxLayout(this);
    pcGrp_05 = new QHBoxLayout(this);
    pcGrp_06 = new QHBoxLayout(this);
    pcGrp_07 = new QHBoxLayout(this);
    pcGrp_08 = new QHBoxLayout(this);
    hplpgrp_01 = new QLabel(QStringLiteral("CPU使用率"), localPCGruop);
    hplpgrp_01->setFont(*font);
    hplpgrp_02 = new QLabel(QStringLiteral("%"), localPCGruop);
    hplpgrp_02->setFont(*font);
    hplpgrp_03 = new QLabel(QStringLiteral("CPU溫度"), localPCGruop);
    hplpgrp_03->setFont(*font);
    hplpgrp_04 = new QLabel(QStringLiteral("℃"), localPCGruop);
    hplpgrp_04->setFont(*font);
    hplpgrp_05 = new QLabel(QStringLiteral("CPU時脈"), localPCGruop);
    hplpgrp_05->setFont(*font);
    hplpgrp_06 = new QLabel(QStringLiteral("Hz"), localPCGruop);
    hplpgrp_06->setFont(*font);
    hplpgrp_07 = new QLabel(QStringLiteral("GPU使用率"), localPCGruop);
    hplpgrp_07->setFont(*font);
    hplpgrp_08 = new QLabel(QStringLiteral("%"), localPCGruop);
    hplpgrp_08->setFont(*font);
    hplpgrp_09 = new QLabel(QStringLiteral("GPU溫度"), localPCGruop);
    hplpgrp_09->setFont(*font);
    hplpgrp_10 = new QLabel(QStringLiteral("℃"), localPCGruop);
    hplpgrp_10->setFont(*font);
    hplpgrp_11 = new QLabel(QStringLiteral("GPU時脈"), localPCGruop);
    hplpgrp_11->setFont(*font);
    hplpgrp_12 = new QLabel(QStringLiteral("Hz"), localPCGruop);
    hplpgrp_12->setFont(*font);
    hplpgrp_13 = new QLabel(QStringLiteral("Memory使用率"), localPCGruop);
    hplpgrp_13->setFont(*font);
    hplpgrp_14 = new QLabel(QStringLiteral("%"), localPCGruop);
    hplpgrp_14->setFont(*font);
    hplpgrp_15 = new QLabel(QStringLiteral("Desk使用率"), localPCGruop);
    hplpgrp_15->setFont(*font);
    hplpgrp_16 = new QLabel(QStringLiteral("%"), localPCGruop);
    hplpgrp_16->setFont(*font);
    vCheckBox = new QCheckBox(QStringLiteral("啟動浮動視窗"), localPCGruop);
    vCheckBox->setFont(*font);
    vCheckBox->setChecked(true);

    pcSpacer = new QSpacerItem(20, 130, QSizePolicy::Minimum, QSizePolicy::Fixed);
    pcGrpSpa_01 = new QSpacerItem(37, 20,QSizePolicy::Fixed, QSizePolicy::Minimum);
    pcGrpSpa_02 = new QSpacerItem(53, 20,QSizePolicy::Fixed, QSizePolicy::Minimum);
    pcGrpSpa_03 = new QSpacerItem(53, 20,QSizePolicy::Fixed, QSizePolicy::Minimum);
    pcGrpSpa_04 = new QSpacerItem(36, 20,QSizePolicy::Fixed, QSizePolicy::Minimum);
    pcGrpSpa_05 = new QSpacerItem(52, 20,QSizePolicy::Fixed, QSizePolicy::Minimum);
    pcGrpSpa_06 = new QSpacerItem(52, 20,QSizePolicy::Fixed, QSizePolicy::Minimum);
    pcGrpSpa_07 = new QSpacerItem(5, 20,QSizePolicy::Fixed, QSizePolicy::Minimum);
    pcGrpSpa_08 = new QSpacerItem(33, 20,QSizePolicy::Fixed, QSizePolicy::Minimum);
    hplcd_01 = new QLCDNumber(localPCGruop);
    hplcd_01->setDigitCount(5);
    hplcd_01->setMode(QLCDNumber::Dec);
    hplcd_01->setSegmentStyle(QLCDNumber::Flat);
    hplcd_02 = new QLCDNumber(localPCGruop);
    hplcd_02->setDigitCount(5);
    hplcd_02->setMode(QLCDNumber::Dec);
    hplcd_02->setSegmentStyle(QLCDNumber::Flat);
    hplcd_03 = new QLCDNumber(localPCGruop);
    hplcd_03->setDigitCount(5);
    hplcd_03->setMode(QLCDNumber::Dec);
    hplcd_03->setSegmentStyle(QLCDNumber::Flat);
    hplcd_04 = new QLCDNumber(localPCGruop);
    hplcd_04->setDigitCount(5);
    hplcd_04->setMode(QLCDNumber::Dec);
    hplcd_04->setSegmentStyle(QLCDNumber::Flat);
    hplcd_05 = new QLCDNumber(localPCGruop);
    hplcd_05->setDigitCount(5);
    hplcd_05->setMode(QLCDNumber::Dec);
    hplcd_05->setSegmentStyle(QLCDNumber::Flat);
    hplcd_06 = new QLCDNumber(localPCGruop);
    hplcd_06->setDigitCount(5);
    hplcd_06->setMode(QLCDNumber::Dec);
    hplcd_06->setSegmentStyle(QLCDNumber::Flat);
    hplcd_07 = new QLCDNumber(localPCGruop);
    hplcd_07->setDigitCount(5);
    hplcd_07->setMode(QLCDNumber::Dec);
    hplcd_07->setSegmentStyle(QLCDNumber::Flat);
    hplcd_08 = new QLCDNumber(localPCGruop);
    hplcd_08->setDigitCount(5);
    hplcd_08->setMode(QLCDNumber::Dec);
    hplcd_08->setSegmentStyle(QLCDNumber::Flat);
    pcGrp_01->addWidget(hplpgrp_01);
    pcGrp_01->addItem(pcGrpSpa_01);
    pcGrp_01->addWidget(hplcd_01);
    pcGrp_01->addWidget(hplpgrp_02);
    pcGrp_02->addWidget(hplpgrp_03);
    pcGrp_02->addItem(pcGrpSpa_02);
    pcGrp_02->addWidget(hplcd_02);
    pcGrp_02->addWidget(hplpgrp_04);
    pcGrp_03->addWidget(hplpgrp_05);
    pcGrp_03->addItem(pcGrpSpa_03);
    pcGrp_03->addWidget(hplcd_03);
    pcGrp_03->addWidget(hplpgrp_06);
    pcGrp_04->addWidget(hplpgrp_07);
    pcGrp_04->addItem(pcGrpSpa_04);
    pcGrp_04->addWidget(hplcd_04);
    pcGrp_04->addWidget(hplpgrp_08);
    pcGrp_05->addWidget(hplpgrp_09);
    pcGrp_05->addItem(pcGrpSpa_05);
    pcGrp_05->addWidget(hplcd_05);
    pcGrp_05->addWidget(hplpgrp_10);
    pcGrp_06->addWidget(hplpgrp_11);
    pcGrp_06->addItem(pcGrpSpa_06);
    pcGrp_06->addWidget(hplcd_06);
    pcGrp_06->addWidget(hplpgrp_12);
    pcGrp_07->addWidget(hplpgrp_13);
    pcGrp_07->addItem(pcGrpSpa_07);
    pcGrp_07->addWidget(hplcd_07);
    pcGrp_07->addWidget(hplpgrp_14);
    pcGrp_08->addWidget(hplpgrp_15);
    pcGrp_08->addItem(pcGrpSpa_08);
    pcGrp_08->addWidget(hplcd_08);
    pcGrp_08->addWidget(hplpgrp_16);
    pcGroupLay->addLayout(pcGrp_01);
    pcGroupLay->addLayout(pcGrp_02);
    pcGroupLay->addLayout(pcGrp_03);
    pcGroupLay->addLayout(pcGrp_04);
    pcGroupLay->addLayout(pcGrp_05);
    pcGroupLay->addLayout(pcGrp_06);
    pcGroupLay->addLayout(pcGrp_07);
    pcGroupLay->addLayout(pcGrp_08);
    pcGroupLay->addWidget(vCheckBox);
    pcGroupLay->addItem(pcSpacer);

    infoGroup = new QGroupBox(QStringLiteral("本機連線資訊"), this);
    infoGrpLay = new QVBoxLayout(infoGroup);
    infoGrp_01 = new QHBoxLayout(this);
    infoGrp_02 = new QHBoxLayout(this);
    infgrp_01 = new QLabel(QStringLiteral("本機位址"), infoGroup);
    infgrp_01->setFont(*font);
    infgrp_02 = new QLabel(QStringLiteral("本機密碼"), infoGroup);
    infgrp_02->setFont(*font);
    infgrp_03 = new QLabel(QStringLiteral("連線中的裝置"), infoGroup);
    infle_01 = new QLineEdit(this);
    infle_01->setEnabled(false);
    infle_02 = new QLineEdit(this);
    infle_02->setEnabled(false);
    infCheckBox = new QCheckBox(QStringLiteral("允許遠端連線"), infoGroup);
    infCheckBox->setFont(*font);
    infTextBrowser = new QTextBrowser(infoGroup);
    infoGrp_01->addWidget(infgrp_01);
    infoGrp_01->addWidget(infle_01);
    infoGrp_02->addWidget(infgrp_02);
    infoGrp_02->addWidget(infle_02);
    infoGrpLay->addLayout(infoGrp_01);
    infoGrpLay->addLayout(infoGrp_02);
    infoGrpLay->addWidget(infCheckBox);
    infoGrpLay->addWidget(infgrp_03);
    infoGrpLay->addWidget(infTextBrowser);

    connectGroup = new QGroupBox(QStringLiteral("新建遠端電腦"), this);
    conGrpLay = new QVBoxLayout(connectGroup);
    congrp_01 = new QLabel(QStringLiteral("遠端電腦位址"), connectGroup);
    congrp_01->setFont(*font);
    congrp_02 = new QLabel(QStringLiteral("連接埠"), connectGroup);
    congrp_02->setFont(*font);
    congrp_03 = new QLabel(QStringLiteral("密碼"), connectGroup);
    congrp_03->setFont(*font);
    conle_01 = new QLineEdit();
    conle_02 = new QLineEdit();
    conle_03 = new QLineEdit();
    connectBtn = new QPushButton(QStringLiteral("連線"));
    conGrpLay->addWidget(congrp_01);
    conGrpLay->addWidget(conle_01);
    conGrpLay->addWidget(congrp_02);
    conGrpLay->addWidget(conle_02);
    conGrpLay->addWidget(congrp_03);
    conGrpLay->addWidget(conle_03);
    conGrpLay->addWidget(connectBtn);

    homeleftLay->addWidget(localPCGruop);
    homerightLay->addWidget(infoGroup);
    homerightLay->addWidget(connectGroup);
    homeMainLay->addLayout(homeleftLay);
    homeMainLay->addLayout(homerightLay);

    initializePerformanceCounters();

    updateTimer = new QTimer(this);
    connect(updateTimer, &QTimer::timeout, this, &Home::updatePerformanceData);
    updateTimer->start(500);
}

Home::~Home()
{

}

void Home::initializePerformanceCounters()
{
    if (PdhOpenQuery(nullptr, 0, &cpuQuery) != ERROR_SUCCESS) {
        qDebug() << "Failed to open PDH query.";
        return;
    }

    if (PdhAddCounter(cpuQuery, TEXT("\\Processor(_Total)\\% Processor Time"), 0, &cpuCounter) != ERROR_SUCCESS) {
        qDebug() << "Failed to add PDH counter.";
        return;
    }

    if (PdhCollectQueryData(cpuQuery) != ERROR_SUCCESS) {
        qDebug() << "Failed to collect initial PDH data.";
    }
}

double Home::getCpuClock()
{
    QProcess process;
    process.start("cmd", QStringList() << "/c" << "wmic cpu get currentclockspeed");
    process.waitForFinished();
    QString output = process.readAllStandardOutput();
    QStringList lines = output.split("\n", Qt::SkipEmptyParts);
    if(lines.size() > 1){
        bool ok;
        double clockSpeed = lines[1].trimmed().toDouble(&ok);
        if(ok){
            return clockSpeed;
        }
    }
    return -1.0;
}

double Home::getCpuTemperature()
{
    QProcess process;
    process.start("cmd", QStringList() << "/c" <<"wmic /namespace:\\\\root\\wmi PATH MSAcpi_ThermalZoneTemperature get currentTemperature");
    process.waitForFinished();
    QString output = process.readAllStandardOutput();
    QStringList lines = output.split("\n", Qt::SkipEmptyParts);
    if (lines.size() > 1) {
        bool ok;
        double rawTemp = lines[1].trimmed().toDouble(&ok);
        if (ok) {
            return (rawTemp - 2732) / 10.0; // Convert to Celsius
        }
    }
    return -1.0;
}

double Home::getMemoryUsage()
{
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfo);

    DWORDLONG totalPhysicalMemory = memInfo.ullTotalPhys;
    DWORDLONG freePhysicalMemory = memInfo.ullAvailPhys;
    return 100.0 * (totalPhysicalMemory - freePhysicalMemory) / totalPhysicalMemory;
}

double Home::getDiskUsage()
{
    ULARGE_INTEGER freeBytesAvailable, totalNumberOfBytes, totalFreeBytes;
    if (GetDiskFreeSpaceEx(L"C:\\", &freeBytesAvailable, &totalNumberOfBytes, &totalFreeBytes)) {
        DWORDLONG usedBytes = totalNumberOfBytes.QuadPart - totalFreeBytes.QuadPart;
        return 100.0 * usedBytes / totalNumberOfBytes.QuadPart;
    }
    return 0.0;
}

void Home::updatePerformanceData()
{
    if (!cpuQuery) {
        return;
    }

    PDH_FMT_COUNTERVALUE counterValue;
    if (PdhCollectQueryData(cpuQuery) == ERROR_SUCCESS &&
        PdhGetFormattedCounterValue(cpuCounter, PDH_FMT_DOUBLE, nullptr, &counterValue) == ERROR_SUCCESS) {
        double cpuUsage = counterValue.doubleValue;
        hplcd_01->display(cpuUsage); // Display CPU usage
    }

    double cpuTemp = getCpuTemperature();
    hplcd_02->display(cpuTemp);

    double cpuClock = getCpuClock();
    hplcd_03->display(cpuClock);

    double memoryUsage = getMemoryUsage();
    hplcd_07->display(memoryUsage);

    double diskUsage = getDiskUsage();
    hplcd_08->display(diskUsage);

}
