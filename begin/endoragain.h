#ifndef ENDORAGAIN_H
#define ENDORAGAIN_H

#include <QDialog>

namespace Ui {
class endoragain;
}

class endoragain : public QDialog
{
    Q_OBJECT

public:
    explicit endoragain(int& number,QWidget *parent = 0);
    ~endoragain();
    bool revalue()
    {
        return revalue1;
    }
    int displayer;

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
private:
    Ui::endoragain *ui;
    bool revalue1;
    void display();
};

#endif // ENDORAGAIN_H
