#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
// pencereye eklemek için bu classları oluşturuyoruz
class QPushButton;
class QLabel;
class QMessageBox;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    QPushButton *m_pushButton;
    QLabel *m_label;
    QMessageBox *m_messageBox;

};
#endif // MAINWINDOW_H
