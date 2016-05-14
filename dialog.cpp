#include "dialog.h"
#include "ui_dialog.h"
Dialog::Dialog(int& number, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),Value1(false), score1(number)
{
    ui->setupUi(this);
    display();
}
Dialog::~Dialog()
{
    delete ui;
}
void Dialog::on_pushButton_clicked()
{
    Value1=1;
    this->close();
}

void Dialog::display()
{
    ui->label_2->setText(QString::number(score1));
}
