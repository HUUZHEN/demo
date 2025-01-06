#include "control.h"

control::control(QWidget *parent)
{
    connect(lab.page1->home->vCheckBox, &QCheckBox::clicked, this, &control::review);
    connect(lab.page3->setpage1->setBtn, &QPushButton::clicked, this, &control::review);
}

void control::review(){
    qDebug()<<"review is called."<<"\n";
    if(lab.page1->home->vCheckBox->checkState()==Qt::Checked) {
        airwindow.show();
        qDebug()<<"airwindow is show.\n";
    }
    else {
        airwindow.close();
        qDebug()<<"airwindow is close.\n";
    }
    if(lab.page3->setpage1->viewcheck_01->checkState()==Qt::Checked){
        airwindow.airla_01->setVisible(true);
        airwindow.airla_02->setVisible(true);
        airwindow.airla_03->setVisible(true);
    }else{
        airwindow.airla_01->setVisible(false);
        airwindow.airla_02->setVisible(false);
        airwindow.airla_03->setVisible(false);
    }
    if(lab.page3->setpage1->viewcheck_02->checkState()==Qt::Checked){
        airwindow.airla_04->setVisible(true);
        airwindow.airla_05->setVisible(true);
        airwindow.airla_06->setVisible(true);
    }else{
        airwindow.airla_04->setVisible(false);
        airwindow.airla_05->setVisible(false);
        airwindow.airla_06->setVisible(false);
    }
    if(lab.page3->setpage1->viewcheck_03->checkState()==Qt::Checked){
        airwindow.airla_07->setVisible(true);
        airwindow.airla_08->setVisible(true);
        airwindow.airla_09->setVisible(true);
    }else{
        airwindow.airla_07->setVisible(false);
        airwindow.airla_08->setVisible(false);
        airwindow.airla_09->setVisible(false);
    }
    if(lab.page3->setpage1->viewcheck_04->checkState()==Qt::Checked){
        airwindow.airla_10->setVisible(true);
        airwindow.airla_11->setVisible(true);
        airwindow.airla_12->setVisible(true);
    }else{
        airwindow.airla_10->setVisible(false);
        airwindow.airla_11->setVisible(false);
        airwindow.airla_12->setVisible(false);
    }
    if(lab.page3->setpage1->viewcheck_05->checkState()==Qt::Checked){
        airwindow.airla_13->setVisible(true);
        airwindow.airla_14->setVisible(true);
        airwindow.airla_15->setVisible(true);
    }else{
        airwindow.airla_13->setVisible(false);
        airwindow.airla_14->setVisible(false);
        airwindow.airla_15->setVisible(false);
    }
    if(lab.page3->setpage1->viewcheck_06->checkState()==Qt::Checked){
        airwindow.airla_16->setVisible(true);
        airwindow.airla_17->setVisible(true);
        airwindow.airla_18->setVisible(true);
    }else{
        airwindow.airla_16->setVisible(false);
        airwindow.airla_17->setVisible(false);
        airwindow.airla_18->setVisible(false);
    }
    if(lab.page3->setpage1->viewcheck_07->checkState()==Qt::Checked){
        airwindow.airla_19->setVisible(true);
        airwindow.airla_20->setVisible(true);
        airwindow.airla_21->setVisible(true);
    }else{
        airwindow.airla_19->setVisible(false);
        airwindow.airla_20->setVisible(false);
        airwindow.airla_21->setVisible(false);
    }
    if(lab.page3->setpage1->viewcheck_08->checkState()==Qt::Checked){
        airwindow.airla_22->setVisible(true);
        airwindow.airla_23->setVisible(true);
        airwindow.airla_24->setVisible(true);
    }else{
        airwindow.airla_22->setVisible(false);
        airwindow.airla_23->setVisible(false);
        airwindow.airla_24->setVisible(false);
    }
}
