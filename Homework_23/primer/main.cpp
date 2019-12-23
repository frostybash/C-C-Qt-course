#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QTextStream>
#include <QDateTime>
#include <QRandomGenerator>
#include <QDebug>
#include <QStringList>
#include <QBarCategoryAxis>
#include <QBarSet>
QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QLineSeries *series = new QLineSeries();
    QChart *chart = new QChart();
    QChartView *chartView = new QChartView(chart);
    QString path ="/home/igor/C-C-Qt-course/Homework_23/primer/";
    QFile file(path+"dataX.txt");
      if (file.open(QFile::WriteOnly | QFile::Truncate)) {
          QTextStream out(&file);
          for (int i=0; i<1000;i++)
              {
                quint32 x = QRandomGenerator::global()->bounded(1,10000);
                quint32 y = QRandomGenerator::global()->bounded(1,10000);
                out << x << "," << y <<"\n";
              }
      }
    file.close();
    QString path3 ="/home/igor/C-C-Qt-course/Homework_23/primer/";
    QFile file3(path3+"dataX.txt");
    if (!file3.open(QIODevice::ReadOnly | QIODevice::Text))
    QTextStream rw(&file3);
    QString line;
    while (!file3.atEnd())
    {
        line = file3.readLine();
        QStringList stroka = line.split(",");
         qulonglong valuesX;
         qulonglong valuesY;
         valuesX=stroka.at(0).toInt();
         valuesY=stroka.at(1).toInt();
    series->append(valuesX,valuesY);
    }
    file3.close();
    QString random_values_from_file;
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment((Qt::AlignBottom));
    chart->addSeries(series);
    chart->createDefaultAxes();
    QFont font;
    font.setPixelSize(18);
    qDebug() << font;
    chart->setTitleBrush(QBrush(Qt::black));
    chart->setTitle("random numbers");
    chartView->setRenderHint(QPainter::Antialiasing);
    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(1000, 1000);
    window.show();
    return a.exec();
}

