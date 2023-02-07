#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setStyleSheet("background-color:white;"); // mainWindow'nun arka plan rengini değiştirmek için
    w.setGeometry(200,200,800,300);   //  mainWindow'nun boyutunu değiştirmek için kullanılır
    w.setWindowTitle("ilk deneme"); // pencere'nin başlağını değiştirmek için kullanılır
    w.show();
    return a.exec();
}
