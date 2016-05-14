#ifndef START_H
#define START_H
#include <QMainWindow>
#include <QDialog>

namespace Ui {
class start;
}

class start : public QDialog
{
    Q_OBJECT

public:
    explicit start(QWidget *parent = 0);
    ~start();
    bool revalue()
        {
            return value;
        }
private:
    Ui::start *ui;
    bool value;
public slots:
    void on_pushButton_clicked();


};

#endif // START_H
