#include "mainwindow.h"
#include <QApplication>
#include <ctime>
#include "start.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    start s;
    s.setModal(true);
  s.exec();
    bool b = s.revalue();
        if(b)
        {
            MainWindow w;
            w.show();
            return a.exec();
        }

}
