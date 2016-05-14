
#include "endoragain.h"
#include "ui_endoragain.h"

endoragain::endoragain(int& number,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::endoragain),revalue1(false),displayer(number)
{
    ui->setupUi(this);
    display();
}

endoragain::~endoragain()
{
    delete ui;
}
void endoragain::on_pushButton_clicked()
{
    revalue1 = true;
    this->close();
}
void endoragain::on_pushButton_2_clicked()
{
    revalue1 = false;
    this->close();
}
void endoragain::display()
{
    ui->labor->setText(QString::number(displayer));
}

