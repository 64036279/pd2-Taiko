#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>
#include <QTimer>
#include <cstdlib>
#include <ctime>
#include<QKeyEvent>
#include "Dialog.h"
 int score=0;
 int a=30;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    moveRed();
    moveBlue();
    moveBlue2();
    starttime();
    
}

void MainWindow::starttime()
{

    QTimer *timer= new QTimer (this);
    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(countdown()));
    timer->start(1000);
}
void MainWindow::countdown()
{
    a--;
    ui->label_10->setText(QString::number(a));
    if (a==0)
    {

        Dialog showUp(score);
        showUp.setModal(true);
        showUp.exec();
        bool again=showUp.return1();
        if(again)
        {
            a=30;
            ui->label_10->setText(QString::number(a));
            score=0;
            ui->label_5->setText(QString::number(score));
            x=600;x1=400;x2=300;
        }
        else
            this->close();
    }
}


void MainWindow::moveRed()
{
    x = (rand()%9+10)*100;
    while(x==x1||x==x2)
            x= (rand()%9+10)*100;
    y=50;
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(nextRed()));
    timer->start(40);
    ui->setupUi(this);
}

void MainWindow::moveBlue()
{
    x1 = (rand()%9+11)*100;
    while(x1==x||x1==x2)
            x1= (rand()%9+11)*300;
    y1=50;
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(nextBlue()));
    timer->start(40);
    ui->setupUi(this);
}

void MainWindow::moveBlue2()
{
    x2=(rand()%9+12)*100;
    while(x2==x||x2==x1)
            x2=(rand()%9+11)*400;
    y2=50;
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(nextBlue2()));
    timer->start(40);
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::nextRed()
{
    x-=10;
    ui->label_1->move(QPoint(x,y));
    srand(time(NULL));
        if( x <=-150 )
        {
            x= (rand()%7+8)*100;
           while( x ==x1||x==x2)
               x+=300;
        }


}
void MainWindow::nextBlue()
{
    x1-=10;
    ui->label_3->move(QPoint(x1,y1));
    srand(time(NULL));
        if( x1 <=-150 )
        {
            x1= (rand()%9+7)*100;
            while( x1 ==x||x1==x2)
                x1+=150;
        }

}

void MainWindow::nextBlue2()
{
    x2-=10;
    ui->label_6->move(QPoint(x2,y2));
    srand(time(NULL));
        if( x2 <=-150 )
        {
            x2= (rand()%9+7)*100;
            while( x2 ==x||x2==x1)
                x2+=250;
        }

}

void MainWindow::keyPressEvent(QKeyEvent* event)
{

        if(x>0&&x<50 &&(event->key() == Qt::Key_J))
        {            
            score++;
            ui->label_5->setText(QString::number(score));
            x= (rand()%9+11)*100;
            while( x ==x1||x==x2 )
                x+= 200;

        }
        if(x1>0&&x1<50&&(event->key() == Qt::Key_K))
        {
            score++;
            ui->label_5->setText(QString::number(score));
            x1= (rand()%10+10)*100;
            while( x1 ==x||x1==x2 )
                x1+= 300;
        }
        if(x2>0&&x2<50&&(event->key() == Qt::Key_K))
        {
            score=score-2;
            ui->label_10->setText(QString::number(a));
            x2= (rand()%10+12)*100;
            while( x2 ==x||x2==x1 )
                x2+= 400;
        }
}



















