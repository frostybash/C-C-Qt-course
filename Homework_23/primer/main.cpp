#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QTextStream>
#include <QDateTime>
QT_CHARTS_USE_NAMESPACE

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qsrand(QDateTime::currentMSecsSinceEpoch() / 0.001);
    QString path ="/home/igor/primer/";
    QString filename ="dataX.txt";
    QFile file(path+"dataX.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    QTextStream out11 (&file);
    for (int i=0; i<1000;i++)
    {

        out11  << qrand()<< "\n";
    }
    file.close();

    QString path2 ="/home/igor/primer/";
    QString filename2 ="dataY.txt";
    QFile file2(path2+"dataY.txt");
    if (!file2.open(QIODevice::WriteOnly | QIODevice::Text))
    QTextStream out2 (&file2);
    for (int j=0; j<1000;j++)
    {
        out2  << qrand()<< "\n";
    }

    file2.close();

   /* QLineSeries *series = new QLineSeries();
    series->append(0, 6);
    series->append(2, 4);
    series->append(3, 8);
    series->append(7, 4);
    series->append(10, 5);
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
    window.show();*/

    return a.exec();
}

