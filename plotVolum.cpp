#include "plotVolum.h"
#include "ui_plotVolum.h"
#include "agence.h"

plot::plot(int *tab,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::plot)
{
    ui->setupUi(this);
    for (int i=0;i<6 ;i++)
        _tab[i]=tab[i];
    plot::plotBancaire();
    plot::plotAssourance();
    plot::plotBoursier();
}
void plot::setTab(int *tab)
{
    for (int i=0;i<6;i++)
        _tab[i]=tab[i];
}
int* plot::getTab()
{
    return _tab;
}

void plot::plotBancaire(){

    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->bancair->setBackground(QBrush(gradient));
    QCPBars *bars = new QCPBars(ui->bancair->xAxis, ui->bancair->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3 << 4 ;
    labels << "Prets" << "Cartes" << "Chequiers" << "Comptes";
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->bancair->xAxis->setTicker(textTicker);
    ui->bancair->xAxis->setTickLabelRotation(60);
    ui->bancair->xAxis->setSubTicks(false);
    ui->bancair->xAxis->setTickLength(10, 5);
    ui->bancair->xAxis->setRange(0, 0);
    ui->bancair->xAxis->setBasePen(QPen(Qt::white));
    ui->bancair->xAxis->setTickPen(QPen(Qt::white));
    ui->bancair->xAxis->grid()->setVisible(true);
    ui->bancair->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->bancair->xAxis->setTickLabelColor(Qt::white);
    ui->bancair->xAxis->setLabelColor(Qt::white);
    ui->bancair->yAxis->setRange(0, 50);
    // Add data:
    QVector<double> barsData;
    //double *tab; tab=agence[ind].getGainst();
    //cout<<"tatatatatata"<<tab[0]<<endl;
    barsData  << _tab[0] << _tab[1] <<  _tab[2] <<  _tab[3];
   // barsData  << 1 << 2 <<  3 <<  4;
    bars->setData(ticks, barsData);
 }
void plot::plotAssourance(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->assourance->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->assourance->xAxis, ui->assourance->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));
    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1  ;
    labels << "Assourance" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->assourance->xAxis->setTicker(textTicker);
    ui->assourance->xAxis->setTickLabelRotation(10);
    ui->assourance->xAxis->setSubTicks(false);
    ui->assourance->xAxis->setTickLength(10, 5);
    ui->assourance->xAxis->setRange(0, 0);
    ui->assourance->xAxis->setBasePen(QPen(Qt::white));
    ui->assourance->xAxis->setTickPen(QPen(Qt::white));
    ui->assourance->xAxis->grid()->setVisible(true);
    ui->assourance->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->assourance->xAxis->setTickLabelColor(Qt::white);
    ui->assourance->xAxis->setLabelColor(Qt::white);
    ui->assourance->yAxis->setRange(0, 50);
    // Add data:
    QVector<double> barsData;
    barsData  << _tab[4] ;
    bars->setData(ticks, barsData);
}

void plot::plotBoursier(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->bours->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->bours->xAxis, ui->bours->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));


    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1  ;
    labels << "bours" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->bours->xAxis->setTicker(textTicker);
    ui->bours->xAxis->setTickLabelRotation(10);
    ui->bours->xAxis->setSubTicks(false);
    ui->bours->xAxis->setTickLength(10, 5);
    //ui->bours->xAxis->setRange(0, 100);
    ui->bours->xAxis->setBasePen(QPen(Qt::white));
    ui->bours->xAxis->setTickPen(QPen(Qt::white));
    ui->bours->xAxis->grid()->setVisible(true);
    ui->bours->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->bours->xAxis->setTickLabelColor(Qt::white);
    ui->bours->xAxis->setLabelColor(Qt::white);
    ui->bours->yAxis->setRange(0, 50);


    // Add data:
    QVector<double> barsData;
    barsData  << _tab[5] ;
    bars->setData(ticks, barsData);
}

plot::~plot()
{
    delete ui;
}
