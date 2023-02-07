 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>
#include<QAbstractButton>
#include <string.h>
#include <string>
#include <iostream>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
// yalnızca kod ile 1.button ve label oluşturuldu
    m_pushButton =new QPushButton("1.button",this);
  m_pushButton->setObjectName("button_1");
    m_pushButton->move(100,100);


m_label = new QLabel("merhaba dünya",this);
m_label->setFont(QFont("Times",8,QFont::Bold));
m_label->move(100,200);
m_messageBox= new QMessageBox(this);


}


MainWindow::~MainWindow()
{
    delete ui;
}



// show text buttonuna tıklandığında aşağıdaki kod gerçekleştirilecektir

void MainWindow::on_pushButton_clicked()
{
    // 3 argument verilmektedir. ikincisi mesajın başlığı, üçüncüsü mesakın içeriğidir.
    //editLine'den bilgi alınacaksa text() fonksiyounu ile alırız

 if(ui->text_1->text()=="0"){
    QMessageBox::information(this,tr("the title"),tr("bu bir mesajdır!! information"));
 }
 if(ui->text_1->text()=="1"){
    QMessageBox::warning(this,tr("warning"),tr("bu bir mesajdır!! "));
 }
 if(ui->text_1->text()=="2"){
    QMessageBox::question(this,tr("question"),tr("bu bir mesajdır!! "));
 }
 if(ui->text_1->text()=="3"){
    QMessageBox::critical(this,tr(" critical"),tr("bu bir mesajdır!!"));
 }

}

void MainWindow::on_pushButton_2_clicked()
{

    cout<< "bu bir mesajdir!! "<< endl;


}

