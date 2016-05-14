#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();
        void moveBlue();
        void moveBlue2();
        void moveRed();
        void keyPressEvent(QKeyEvent* event);
         void starttime();
    private:
        Ui::MainWindow *ui;


        int x,y,x1,y1,x2,y2;
        QTimer *timer;


     public slots:
        void nextRed();
        void nextBlue();
        void nextBlue2();
        void countdown();
};

#endif // MAINWINDOW_H
