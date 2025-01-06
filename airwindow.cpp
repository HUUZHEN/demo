#include "airwindow.h"
//#include "set.h"
#include <QFont>

airWindow::airWindow()
{
    //QFont *font;
    QImage icon;
    //font->setPointSize(10);
    //font->setBold(true);

    /*setWindowTitle("Monitor");
    mSysTrayIcon = new QSystemTrayIcon(this);
    mSysTrayIcon->setIcon(QIcon(":/image/Icon.png"));
    mSysTrayIcon->setToolTip(QStringLiteral("Monitor"));
    connect(mSysTrayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason)),this,SLOT(on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason)));
    connect(mSysTrayIcon,&QSystemTrayIcon::messageClicked,[&](){
        this->show();
    });
    createActions();
    createMenu();
    mSysTrayIcon->show();*/

    mainlayout = new QVBoxLayout();
    airhl_01 = new QHBoxLayout();
    airhl_02 = new QHBoxLayout();
    airhl_03 = new QHBoxLayout();
    airhl_04 = new QHBoxLayout();
    airhl_05 = new QHBoxLayout();
    airhl_06 = new QHBoxLayout();
    airhl_07 = new QHBoxLayout();
    airhl_08 = new QHBoxLayout();
    airla_01 = new QLabel(QStringLiteral("CPU使用率"));
    airla_02 = new QLabel(QStringLiteral("Test."));
    airla_03 = new QLabel(QStringLiteral("%"));
    airla_04 = new QLabel(QStringLiteral("CPU溫度"));
    airla_05 = new QLabel(QStringLiteral("Test."));
    airla_06 = new QLabel(QStringLiteral("℃"));
    airla_07 = new QLabel(QStringLiteral("CPU時脈"));
    airla_08 = new QLabel(QStringLiteral("Test."));
    airla_09 = new QLabel(QStringLiteral("Hz"));
    airla_10 = new QLabel(QStringLiteral("GPU使用率"));
    airla_11 = new QLabel(QStringLiteral("Test."));
    airla_12 = new QLabel(QStringLiteral("%"));
    airla_13 = new QLabel(QStringLiteral("GPU溫度"));
    airla_14 = new QLabel(QStringLiteral("Test."));
    airla_15 = new QLabel(QStringLiteral("℃"));
    airla_16 = new QLabel(QStringLiteral("GPU時脈"));
    airla_17 = new QLabel(QStringLiteral("Test."));
    airla_18 = new QLabel(QStringLiteral("Hz"));
    airla_19 = new QLabel(QStringLiteral("Memory使用率"));
    airla_20 = new QLabel(QStringLiteral("Test."));
    airla_21 = new QLabel(QStringLiteral("%"));
    airla_22 = new QLabel(QStringLiteral("Desk使用率"));
    airla_23 = new QLabel(QStringLiteral("Test."));
    airla_24 = new QLabel(QStringLiteral("%"));
    /*airla_01->setFont(*font);
    airla_02->setFont(*font);
    airla_03->setFont(*font);
    airla_04->setFont(*font);
    airla_05->setFont(*font);
    airla_06->setFont(*font);
    airla_07->setFont(*font);
    airla_08->setFont(*font);
    airla_09->setFont(*font);
    airla_10->setFont(*font);
    airla_11->setFont(*font);
    airla_12->setFont(*font);
    airla_13->setFont(*font);
    airla_14->setFont(*font);
    airla_15->setFont(*font);
    airla_16->setFont(*font);
    airla_17->setFont(*font);
    airla_18->setFont(*font);
    airla_19->setFont(*font);
    airla_20->setFont(*font);
    airla_21->setFont(*font);
    airla_22->setFont(*font);
    airla_23->setFont(*font);
    airla_24->setFont(*font);*/
    mainsi = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);
    airsi_01 = new QSpacerItem(32, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    airsi_02 = new QSpacerItem(45, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    airsi_03 = new QSpacerItem(45, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    airsi_04 = new QSpacerItem(31, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    airsi_05 = new QSpacerItem(44, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    airsi_06 = new QSpacerItem(44, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    airsi_07 = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    airsi_08 = new QSpacerItem(28, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);
    airhl_01->addWidget(airla_01);
    airhl_01->addItem(airsi_01);
    airhl_01->addWidget(airla_02);
    airhl_01->addWidget(airla_03);
    airhl_02->addWidget(airla_04);
    airhl_02->addItem(airsi_02);
    airhl_02->addWidget(airla_05);
    airhl_02->addWidget(airla_06);
    airhl_03->addWidget(airla_07);
    airhl_03->addItem(airsi_03);
    airhl_03->addWidget(airla_08);
    airhl_03->addWidget(airla_09);
    airhl_04->addWidget(airla_10);
    airhl_04->addItem(airsi_04);
    airhl_04->addWidget(airla_11);
    airhl_04->addWidget(airla_12);
    airhl_05->addWidget(airla_13);
    airhl_05->addItem(airsi_05);
    airhl_05->addWidget(airla_14);
    airhl_05->addWidget(airla_15);
    airhl_06->addWidget(airla_16);
    airhl_06->addItem(airsi_06);
    airhl_06->addWidget(airla_17);
    airhl_06->addWidget(airla_18);
    airhl_07->addWidget(airla_19);
    airhl_07->addItem(airsi_07);
    airhl_07->addWidget(airla_20);
    airhl_07->addWidget(airla_21);
    airhl_08->addWidget(airla_22);
    airhl_08->addItem(airsi_08);
    airhl_08->addWidget(airla_23);
    airhl_08->addWidget(airla_24);
    mainlayout->addLayout(airhl_01);
    mainlayout->addLayout(airhl_02);
    mainlayout->addLayout(airhl_03);
    mainlayout->addLayout(airhl_04);
    mainlayout->addLayout(airhl_05);
    mainlayout->addLayout(airhl_06);
    mainlayout->addLayout(airhl_07);
    mainlayout->addLayout(airhl_08);
    mainlayout->addItem(mainsi);
    setLayout(mainlayout);
}

void  airWindow::mousePressEvent(QMouseEvent *event)
{
     if (event->button() == Qt::LeftButton)
    {
        m_bDrag =  true ;
        mouseStartPoint = event->globalPos();
        windowTopLeftPoint =  this ->frameGeometry().topLeft();
    }
}

void  airWindow::mouseMoveEvent(QMouseEvent *event)
{
     if (m_bDrag)
    {
        QPoint distance = event->globalPos() - mouseStartPoint;
         this ->move(windowTopLeftPoint + distance);
    }
}

void  airWindow::mouseReleaseEvent(QMouseEvent *event)
{
     if (event->button() == Qt::LeftButton)
    {
        m_bDrag =  false ;
    }
}

void airWindow::on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason)
{
    switch(reason){
    case QSystemTrayIcon::Trigger:
        mSysTrayIcon->showMessage(QStringLiteral("Monitor"),QStringLiteral("welcome use me"),QSystemTrayIcon::Information, 1000);
        break;
    case QSystemTrayIcon::DoubleClick:
        this->show();
        break;
    default:
        break;
    }
}
void airWindow::createActions()
{
    mShowMainAction = new QAction(QStringLiteral("Show"), this);
    connect(mShowMainAction,SIGNAL(triggered()),this,SLOT(on_showMainAction()));

    mHideAppAction = new QAction(QStringLiteral("Hide"), this);
    connect(mHideAppAction,&QAction::triggered,[&](){this->hide();});

    mExitAppAction = new QAction(QStringLiteral("Quit"), this);
    connect(mExitAppAction,SIGNAL(triggered()), this, SLOT(on_exitAppAction()));
}
void airWindow::createMenu()
{
    mMenu = new QMenu(this);
    mMenu->addAction(mShowMainAction);
    mMenu->addAction(mHideAppAction);
    mMenu->addAction(mExitAppAction);
    mSysTrayIcon->setContextMenu(mMenu);
}

void airWindow::on_showMainAction()
{
    this->show();
}

void airWindow::on_exitAppAction()
{
    exit(0);
}
