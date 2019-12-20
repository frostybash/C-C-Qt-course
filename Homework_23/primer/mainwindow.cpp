#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // createFile();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*void MainWindow::createFile()
{
    QFile file("data.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;
    qDebug("log1");
    QTextStream out(&file);
    out << "The magic number is: " << 49 << "\n";
    qDebug("log1");
    file.close();
    qDebug("log1");
}*/
