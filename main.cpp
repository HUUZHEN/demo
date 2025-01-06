#include "lab.h"
#include "airwindow.h"
#include "control.h"

#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    control con;
    con.lab.setFixedSize(652,576);
    con.lab.setWindowTitle(QStringLiteral("電腦效能監控"));
    con.lab.show();
    con.airwindow.setFixedSize(190,180);
    con.airwindow.setWindowFlags(Qt::FramelessWindowHint|Qt::WindowStaysOnTopHint);
    con.airwindow.setAttribute(Qt::WA_TranslucentBackground);
    //con.airwindow.show();
    return a.exec();
}
