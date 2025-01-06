#include "set.h"
#include <QFont>

setPage1::setPage1()
{
    mainLay = new QVBoxLayout();
    viewGroup = new QGroupBox(QStringLiteral("小視窗顯示資訊"));
    viewGrpLay = new QVBoxLayout(viewGroup);
    setBtn = new QPushButton(QStringLiteral("設定"));
    viewcheck_01 = new QCheckBox(QStringLiteral("CPU使用率"));
    viewcheck_02 = new QCheckBox(QStringLiteral("CPU溫度"));
    viewcheck_03 = new QCheckBox(QStringLiteral("CPU時脈"));
    viewcheck_04 = new QCheckBox(QStringLiteral("GPU使用率"));
    viewcheck_05 = new QCheckBox(QStringLiteral("GPU溫度"));
    viewcheck_06 = new QCheckBox(QStringLiteral("GPU時脈"));
    viewcheck_07 = new QCheckBox(QStringLiteral("Memory使用率"));
    viewcheck_08 = new QCheckBox(QStringLiteral("Desk使用率"));
    viewcheck_01->setChecked(true);
    viewcheck_02->setChecked(true);
    viewcheck_03->setChecked(true);
    viewcheck_04->setChecked(true);
    viewcheck_05->setChecked(true);
    viewcheck_06->setChecked(true);
    viewcheck_07->setChecked(true);
    viewcheck_08->setChecked(true);
    viewGrpLay->addWidget(viewcheck_01);
    viewGrpLay->addWidget(viewcheck_02);
    viewGrpLay->addWidget(viewcheck_03);
    viewGrpLay->addWidget(viewcheck_04);
    viewGrpLay->addWidget(viewcheck_05);
    viewGrpLay->addWidget(viewcheck_06);
    viewGrpLay->addWidget(viewcheck_07);
    viewGrpLay->addWidget(viewcheck_08);
    viewGrpLay->addWidget(setBtn);
    mainLay->addWidget(viewGroup);
    setLayout(mainLay);
}
