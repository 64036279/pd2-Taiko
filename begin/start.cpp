#include "start.h"
#include "ui_start.h"
#include "mainwindow.h"
start::start(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::start),value(false)
{
    ui->setupUi(this);
}

start::~start()
{
    delete ui;
}
void start::on_pushButton_clicked()
{
    value =1;
    this->close();
}
