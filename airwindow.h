#ifndef AIRWINDOW_H
#define AIRWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QLabel>
#include <QPoint>
#include <QMouseEvent>
#include <QSystemTrayIcon>
#include <QAction>
#include <QMenu>
#include <QTextCharFormat>
#include <QImage>
#include <QObject>

class airWindow : public QWidget
{
    Q_OBJECT
public:
    airWindow();

//private:
    QSystemTrayIcon* mSysTrayIcon;
    QMenu *mMenu;
    QAction *mShowMainAction;
    QAction *mExitAppAction;
    QVBoxLayout *mainlayout;
    QAction *mHideAppAction;

    QHBoxLayout *airhl_01;
    QHBoxLayout *airhl_02;
    QHBoxLayout *airhl_03;
    QHBoxLayout *airhl_04;
    QHBoxLayout *airhl_05;
    QHBoxLayout *airhl_06;
    QHBoxLayout *airhl_07;
    QHBoxLayout *airhl_08;
    QSpacerItem *mainsi;
    QSpacerItem *airsi_01;
    QSpacerItem *airsi_02;
    QSpacerItem *airsi_03;
    QSpacerItem *airsi_04;
    QSpacerItem *airsi_05;
    QSpacerItem *airsi_06;
    QSpacerItem *airsi_07;
    QSpacerItem *airsi_08;
    QLabel      *airla_01;
    QLabel      *airla_02;
    QLabel      *airla_03;
    QLabel      *airla_04;
    QLabel      *airla_05;
    QLabel      *airla_06;
    QLabel      *airla_07;
    QLabel      *airla_08;
    QLabel      *airla_09;
    QLabel      *airla_10;
    QLabel      *airla_11;
    QLabel      *airla_12;
    QLabel      *airla_13;
    QLabel      *airla_14;
    QLabel      *airla_15;
    QLabel      *airla_16;
    QLabel      *airla_17;
    QLabel      *airla_18;
    QLabel      *airla_19;
    QLabel      *airla_20;
    QLabel      *airla_21;
    QLabel      *airla_22;
    QLabel      *airla_23;
    QLabel      *airla_24;

    bool        m_bDrag;
    QPoint      mouseStartPoint;
    QPoint      windowTopLeftPoint;

    int setState_01;
    int setState_02;
    int setState_03;
    int setState_04;
    int setState_05;
    int setState_06;
    int setState_07;
    int setState_08;

    void createActions();
    void createMenu();
private slots:
    void  mousePressEvent(QMouseEvent *event);
    void  mouseMoveEvent(QMouseEvent *event);
    void  mouseReleaseEvent(QMouseEvent *event);

    void on_activatedSysTrayIcon(QSystemTrayIcon::ActivationReason reason);
    void on_showMainAction();
    void on_exitAppAction();
/*public slots:
    void recvDaraAtairWindow_02(char state[8]);*/
};

#endif // AIRWINDOW_H
