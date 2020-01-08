#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QFile>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString path ="/home/igor/random_password/";
    QFile data(path+"output.txt");
      if (data.open(QFile::WriteOnly | QFile::Truncate)) {
          QTextStream out(&data);
          quint32 x = QRandomGenerator::global()->bounded(1,10000);
          out << "password" << ":" << x <<"\n";
      }
    data.close();

}


