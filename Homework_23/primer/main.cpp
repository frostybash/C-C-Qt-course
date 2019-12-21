#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QTextStream>
#include <QDateTime>
#include <QRandomGenerator>
QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRandomGenerator prng1(100), prng2(100);
          Q_ASSERT(prng1.generate() == prng2.generate());
          Q_ASSERT(prng1.generate64() == prng2.generate64());
    int x = QRandomGenerator::global()->generate();
    int y = QRandomGenerator::global()->generate();
    //qsrand(QDateTime::currentMSecsSinceEpoch() / 1000);
    QString path ="/home/igor/C-C-Qt-course/Homework_23/primer";
    QString filename ="dataX.txt";
    QFile file(path+"dataX.txt");
      if (file.open(QFile::WriteOnly | QFile::Truncate)) {
          QTextStream out(&file);
          for (int i=0; i<1000;i++)
              {
                out << QRandomGenerator::global()->generate() << "\n";
          }
      }
    file.close();

    QString filename2 ="dataY.txt";
    QFile file2(path+"dataY.txt");
      if (file2.open(QFile::WriteOnly | QFile::Truncate)) {
          QTextStream out2(&file);
          for (int j=0; j<1000;j++)
              {
                out2 << QRandomGenerator::global()->generate() << "\n";
          }
      }
    file2.close();
    QFile file3("primerdataX.txt");
         if (!file3.open(QIODevice::ReadOnly | QIODevice::Text))

         QTextStream in1(&file3);
         while (in1.atEnd()) {
             QString line = in1.readLine();
            // process_line(line);
         }
    QLineSeries *series = new QLineSeries();
    series->append(x,y);
    series->append(x,y);
    series->append(x,y);
    series->append(x,y);
    series->append(x,y);
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle("random numbers");
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    QMainWindow window;
    window.setCentralWidget(chartView);
    window.resize(1000, 1000);
    window.show();

    return a.exec();
}

