#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
public:
    explicit Dialog(int& number,QWidget *parent = 0);
    ~Dialog();
    bool return1()
    {
        return Value1;
    }
    int score1;
public slots:
    void on_pushButton_clicked();
private:
    Ui::Dialog *ui;
    bool Value1;
    void display();
};

#endif // DIALOG_H
