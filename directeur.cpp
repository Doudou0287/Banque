#include "directeur.h"
#include "ui_directeur.h"
#include "agence.h"
using namespace std;

int maxof(int tab[5][6])
{
    int c1[3];  c1[0]=tab[0][0]+tab[0][1]+tab[0][2]+tab[0][3];  c1[1]=tab[0][4]; c1[2]=tab[0][5];
    int c2[3];  c2[0]=tab[1][0]+tab[1][1]+tab[1][2]+tab[1][3];  c2[1]=tab[1][4]; c2[2]=tab[1][5];
    int c3[3];  c3[0]=tab[2][0]+tab[2][1]+tab[2][2]+tab[2][3];  c3[1]=tab[2][4]; c3[2]=tab[2][5];
    int c4[3];  c4[0]=tab[3][0]+tab[3][1]+tab[3][2]+tab[3][3];  c4[1]=tab[3][4]; c4[2]=tab[3][5];
    int c5[3];  c5[0]=tab[4][0]+tab[4][1]+tab[4][2]+tab[4][3];  c5[1]=tab[4][4]; c5[2]=tab[4][5];
    int ymax[5];
    ymax[0] = *max_element(c1 ,c1 + 2);
    ymax[1] = *max_element(c2 ,c2 + 2);
    ymax[2] = *max_element(c3 ,c3 + 2);
    ymax[3] = *max_element(c4 ,c4 + 2);
    ymax[4] = *max_element(c5 ,c5 + 2);
    return *max_element(ymax,ymax+4);
}

directeur::directeur(int **tab,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::directeur)
{
    ui->setupUi(this);
    for(int i=0; i<5; i++)
        for(int j=0; j<6; j++)
            _tab[i][j]=tab[i][j];

    ymax = maxof(_tab);
    directeur::ag1();
    directeur::ag2();
    directeur::ag3();
    directeur::ag4();
    directeur::ag5();
    //_tab=asap;
}
void directeur::setTab(int **tab)
{
    for(int i=0;i<5;i++)
        for(int j=0;j<6;j++)
            _tab[i][j]=tab[i][j];
}
int* directeur::getTab()
{
    return *_tab;
}

directeur::~directeur()
{
    delete ui;
}

void directeur::ag1(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->ag1->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->ag1->xAxis, ui->ag1->yAxis);
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
    ui->ag1->xAxis->setTicker(textTicker);
    ui->ag1->xAxis->setTickLabelRotation(60);
    ui->ag1->xAxis->setSubTicks(false);
    ui->ag1->xAxis->setTickLength(10, 5);
    ui->ag1->xAxis->setRange(0, 0);
    ui->ag1->xAxis->setBasePen(QPen(Qt::white));
    ui->ag1->xAxis->setTickPen(QPen(Qt::white));
    ui->ag1->xAxis->grid()->setVisible(true);
    ui->ag1->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->ag1->xAxis->setTickLabelColor(Qt::white);
    ui->ag1->xAxis->setLabelColor(Qt::white);
    ui->ag1->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;
    barsData  << _tab[0][0]+_tab[0][1]+_tab[0][2]+_tab[0][3]  << _tab[0][4] << _tab[0][5];
    bars->setData(ticks, barsData);
}

void directeur::ag2(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->ag2->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->ag2->xAxis, ui->ag2->yAxis);
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
    ui->ag2->xAxis->setTicker(textTicker);
    ui->ag2->xAxis->setTickLabelRotation(60);
    ui->ag2->xAxis->setSubTicks(false);
    ui->ag2->xAxis->setTickLength(10, 5);
    ui->ag2->xAxis->setRange(0, 0);
    ui->ag2->xAxis->setBasePen(QPen(Qt::white));
    ui->ag2->xAxis->setTickPen(QPen(Qt::white));
    ui->ag2->xAxis->grid()->setVisible(true);
    ui->ag2->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->ag2->xAxis->setTickLabelColor(Qt::white);
    ui->ag2->xAxis->setLabelColor(Qt::white);
    ui->ag2->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;
    barsData  << _tab[1][0]+_tab[1][1]+_tab[1][2]+_tab[1][3]  << _tab[1][4] << _tab[1][5];
    bars->setData(ticks, barsData);
}
void directeur::ag3(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->ag3->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->ag3->xAxis, ui->ag3->yAxis);
    bars->setAntialiased(false);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));
    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3;
    labels << "canal1" <<"canal2" << "canal3" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->ag3->xAxis->setTicker(textTicker);
    ui->ag3->xAxis->setTickLabelRotation(60);
    ui->ag3->xAxis->setSubTicks(false);
    ui->ag3->xAxis->setTickLength(10, 5);
    ui->ag3->xAxis->setRange(0, 0);
    ui->ag3->xAxis->setBasePen(QPen(Qt::white));
    ui->ag3->xAxis->setTickPen(QPen(Qt::white));
    ui->ag3->xAxis->grid()->setVisible(true);
    ui->ag3->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->ag3->xAxis->setTickLabelColor(Qt::white);
    ui->ag3->xAxis->setLabelColor(Qt::white);
    ui->ag3->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;

    barsData  << _tab[2][0]+_tab[2][1]+_tab[2][2]+_tab[2][3]  << _tab[2][4] << _tab[2][5];
    bars->setData(ticks, barsData);
}
void directeur::ag4(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->ag4->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->ag4->xAxis, ui->ag4->yAxis);
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
    ui->ag4->xAxis->setTicker(textTicker);
    ui->ag4->xAxis->setTickLabelRotation(60);
    ui->ag4->xAxis->setSubTicks(false);
    ui->ag4->xAxis->setTickLength(10, 5);
    ui->ag4->xAxis->setRange(0, 0);
    ui->ag4->xAxis->setBasePen(QPen(Qt::white));
    ui->ag4->xAxis->setTickPen(QPen(Qt::white));
    ui->ag4->xAxis->grid()->setVisible(true);
    ui->ag4->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->ag4->xAxis->setTickLabelColor(Qt::white);
    ui->ag4->xAxis->setLabelColor(Qt::white);
    ui->ag4->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;
    barsData  << _tab[3][0]+_tab[3][1]+_tab[3][2]+_tab[3][3]  << _tab[3][4] << _tab[3][5];

    bars->setData(ticks, barsData);
}
void directeur::ag5(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->ag5->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->ag5->xAxis, ui->ag5->yAxis);
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
    ui->ag5->xAxis->setTicker(textTicker);
    ui->ag5->xAxis->setTickLabelRotation(60);
    ui->ag5->xAxis->setSubTicks(false);
    ui->ag5->xAxis->setTickLength(10, 5);
    ui->ag5->xAxis->setRange(0, 0);
    ui->ag5->xAxis->setBasePen(QPen(Qt::white));
    ui->ag5->xAxis->setTickPen(QPen(Qt::white));
    ui->ag5->xAxis->grid()->setVisible(true);
    ui->ag5->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->ag5->xAxis->setTickLabelColor(Qt::white);
    ui->ag5->xAxis->setLabelColor(Qt::white);
    ui->ag5->yAxis->setRange(0, ymax);
    // Add data:
    QVector<double> barsData;

    barsData  << _tab[4][0]+_tab[4][1]+_tab[4][2]+_tab[4][3]  << _tab[4][4] << _tab[4][5];
    bars->setData(ticks, barsData);
}
