#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringListModel>
#include <QAbstractItemModel>
#include<QLineEdit>
#include<iostream>
#include<qstring.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
  // var olan text'i korur üstüne ekleme yapar :append()
ui->textEdit->append("isim: "+ ui->name_txt->text()+",soyisim: "+ui->surname_txt->text()+",şifre: "+ui->pass_txt->text()+",email: "+ui->email_txt->text());


}

