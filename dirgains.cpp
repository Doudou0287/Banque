#include "dirgains.h"
#include "ui_dirgains.h"
#include "agence.h"

double maxof(double tab[5][6])
{
    double c1[3];  c1[0]=tab[0][0]+tab[0][1]+tab[0][2]+tab[0][3];  c1[1]=tab[0][4]; c1[2]=tab[0][5];
    double c2[3];  c2[0]=tab[1][0]+tab[1][1]+tab[1][2]+tab[1][3];  c2[1]=tab[1][4]; c2[2]=tab[1][5];
    double c3[3];  c3[0]=tab[2][0]+tab[2][1]+tab[2][2]+tab[2][3];  c3[1]=tab[2][4]; c3[2]=tab[2][5];
    double c4[3];  c4[0]=tab[3][0]+tab[3][1]+tab[3][2]+tab[3][3];  c4[1]=tab[3][4]; c4[2]=tab[3][5];
    double c5[3];  c5[0]=tab[4][0]+tab[4][1]+tab[4][2]+tab[4][3];  c5[1]=tab[4][4]; c5[2]=tab[4][5];
    double ymax[5];
    ymax[0] = *max_element(c1 ,c1 + 2);
    ymax[1] = *max_element(c2 ,c2 + 2);
    ymax[2] = *max_element(c3 ,c3 + 2);
    ymax[3] = *max_element(c4 ,c4 + 2);
    ymax[4] = *max_element(c5 ,c5 + 2);
    return *max_element(ymax,ymax+4);
}

dirGains::dirGains(double **tabG, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dirGains)
{

    ui->setupUi(this);
    for(int i=0; i<5; i++)
        for(int j=0; j<6; j++)
            _tabG[i][j]=tabG[i][j];

    ymax = maxof(_tabG);
    dirGains::ag1();
    dirGains::ag2();
    dirGains::ag3();
    dirGains::ag4();
    dirGains::ag5();
}

using namespace std;

void dirGains::ag1(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->Ag1->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->Ag1->xAxis, ui->Ag1->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));
    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3;
    labels << "canal1" <<"canal2" << "canal3" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->Ag1->xAxis->setTicker(textTicker);
    ui->Ag1->xAxis->setTickLabelRotation(60);
    ui->Ag1->xAxis->setSubTicks(false);
    ui->Ag1->xAxis->setTickLength(10, 5);
    ui->Ag1->xAxis->setRange(0, 0);
    ui->Ag1->xAxis->setBasePen(QPen(Qt::white));
    ui->Ag1->xAxis->setTickPen(QPen(Qt::white));
    ui->Ag1->xAxis->grid()->setVisible(true);
    ui->Ag1->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->Ag1->xAxis->setTickLabelColor(Qt::white);
    ui->Ag1->xAxis->setLabelColor(Qt::white);
    ui->Ag1->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;
    barsData  << _tabG[0][0]+_tabG[0][1]+_tabG[0][2]+_tabG[0][3]  << _tabG[0][4] << _tabG[0][5];
//    barsData  << 6  << 1 << 2;

    bars->setData(ticks, barsData);
}

void dirGains::ag2(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->Ag2->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->Ag2->xAxis, ui->Ag2->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));
    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3;
    labels << "canal1" <<"canal2" << "canal3" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->Ag2->xAxis->setTicker(textTicker);
    ui->Ag2->xAxis->setTickLabelRotation(60);
    ui->Ag2->xAxis->setSubTicks(false);
    ui->Ag2->xAxis->setTickLength(10, 5);
    ui->Ag2->xAxis->setRange(0, 0);
    ui->Ag2->xAxis->setBasePen(QPen(Qt::white));
    ui->Ag2->xAxis->setTickPen(QPen(Qt::white));
    ui->Ag2->xAxis->grid()->setVisible(true);
    ui->Ag2->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->Ag2->xAxis->setTickLabelColor(Qt::white);
    ui->Ag2->xAxis->setLabelColor(Qt::white);
    ui->Ag2->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;
    barsData  << _tabG[1][0]+_tabG[1][1]+_tabG[1][2]+_tabG[1][3]  << _tabG[1][4] << _tabG[1][5];
    bars->setData(ticks, barsData);
}
void dirGains::ag3(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->Ag3->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->Ag3->xAxis, ui->Ag3->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));
    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3;
    labels << "canal1" <<"canal2" << "canal3" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->Ag3->xAxis->setTicker(textTicker);
    ui->Ag3->xAxis->setTickLabelRotation(60);
    ui->Ag3->xAxis->setSubTicks(false);
    ui->Ag3->xAxis->setTickLength(10, 5);
    ui->Ag3->xAxis->setRange(0, 0);
    ui->Ag3->xAxis->setBasePen(QPen(Qt::white));
    ui->Ag3->xAxis->setTickPen(QPen(Qt::white));
    ui->Ag3->xAxis->grid()->setVisible(true);
    ui->Ag3->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->Ag3->xAxis->setTickLabelColor(Qt::white);
    ui->Ag3->xAxis->setLabelColor(Qt::white);
    ui->Ag3->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;

    barsData  << _tabG[2][0]+_tabG[2][1]+_tabG[2][2]+_tabG[2][3]  << _tabG[2][4] << _tabG[2][5];
    bars->setData(ticks, barsData);
}
void dirGains::ag4(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->Ag4->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->Ag4->xAxis, ui->Ag4->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));
    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3;
    labels << "canal1" <<"canal2" << "canal3" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->Ag4->xAxis->setTicker(textTicker);
    ui->Ag4->xAxis->setTickLabelRotation(60);
    ui->Ag4->xAxis->setSubTicks(false);
    ui->Ag4->xAxis->setTickLength(10, 5);
    ui->Ag4->xAxis->setRange(0, 0);
    ui->Ag4->xAxis->setBasePen(QPen(Qt::white));
    ui->Ag4->xAxis->setTickPen(QPen(Qt::white));
    ui->Ag4->xAxis->grid()->setVisible(true);
    ui->Ag4->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->Ag4->xAxis->setTickLabelColor(Qt::white);
    ui->Ag4->xAxis->setLabelColor(Qt::white);
    ui->Ag4->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;

    barsData  << _tabG[3][0]+_tabG[3][1]+_tabG[3][2]+_tabG[3][3]  << _tabG[3][4] << _tabG[3][5];
    bars->setData(ticks, barsData);
}
void dirGains::ag5(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->Ag5->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->Ag5->xAxis, ui->Ag5->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));
    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3;
    labels << "canal1" <<"canal2" << "canal3" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->Ag5->xAxis->setTicker(textTicker);
    ui->Ag5->xAxis->setTickLabelRotation(60);
    ui->Ag5->xAxis->setSubTicks(false);
    ui->Ag5->xAxis->setTickLength(10, 5);
    ui->Ag5->xAxis->setRange(0, 0);
    ui->Ag5->xAxis->setBasePen(QPen(Qt::white));
    ui->Ag5->xAxis->setTickPen(QPen(Qt::white));
    ui->Ag5->xAxis->grid()->setVisible(true);
    ui->Ag5->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->Ag5->xAxis->setTickLabelColor(Qt::white);
    ui->Ag5->xAxis->setLabelColor(Qt::white);
    ui->Ag5->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;

    barsData  << _tabG[4][0]+_tabG[4][1]+_tabG[4][2]+_tabG[4][3]  << _tabG[4][4] << _tabG[4][5];
    bars->setData(ticks, barsData);
}

dirGains::~dirGains()
{
    delete ui;
}
