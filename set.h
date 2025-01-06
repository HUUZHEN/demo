#ifndef SET_H
#define SET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QCheckBox>
#include <QPushButton>
#include <QObject>

class setPage1 : public QWidget
{
    //Q_OBJECT
public:
    setPage1();
    QCheckBox   *viewcheck_01;
    QCheckBox   *viewcheck_02;
    QCheckBox   *viewcheck_03;
    QCheckBox   *viewcheck_04;
    QCheckBox   *viewcheck_05;
    QCheckBox   *viewcheck_06;
    QCheckBox   *viewcheck_07;
    QCheckBox   *viewcheck_08;
    char checkstate_01;
    char checkstate_02;
    char checkstate_03;
    char checkstate_04;
    char checkstate_05;
    char checkstate_06;
    char checkstate_07;
    char checkstate_08;

    QPushButton *setBtn;
    void ischecked();
    //void emitDataFromSet();
signals:
    //void sendDataFromSet(char state[8]);
private:
    //char state[8];

    QVBoxLayout *mainLay;
    QGroupBox   *viewGroup;
    QVBoxLayout *viewGrpLay;
};

#endif // SET_H
