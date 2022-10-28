#include "plotGains.h"
#include "ui_plotGains.h"
#include "agence.h"

choose::choose(double *tabG,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::choose)
{
    ui->setupUi(this);
    for(int i=0;i<6;i++)
        _tabG[i]=tabG[i];
    choose::plotBancaire();
    choose::plotAssourance();
    choose::plotBoursier();
}
void choose::setTab(double *tabG)
{
    for(int i=0;i<6;i++)
        _tabG[i]=tabG[i];
}
double* choose::getTab()
{
    return _tabG;
}
void choose::plotBancaire(){

    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->ban->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->ban->xAxis, ui->ban->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));


    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1 << 2 << 3 << 4 ;
    labels << "Prets" << "Cartes" << "Chequiers" << "Comptes";
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->ban->xAxis->setTicker(textTicker);
    ui->ban->xAxis->setTickLabelRotation(60);
    ui->ban->xAxis->setSubTicks(false);
    ui->ban->xAxis->setTickLength(10, 5);
    ui->ban->xAxis->setRange(0, 0);
    ui->ban->xAxis->setBasePen(QPen(Qt::white));
    ui->ban->xAxis->setTickPen(QPen(Qt::white));
    ui->ban->xAxis->grid()->setVisible(true);
    ui->ban->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->ban->xAxis->setTickLabelColor(Qt::white);
    ui->ban->xAxis->setLabelColor(Qt::white);
    ui->ban->yAxis->setRange(0, 20000);
    // Add data:
    QVector<double> barsData;
    //double *tab; tab=agence[ind].getGainst();
    //cout<<"tatatatatata"<<tab[0]<<endl;
    barsData  << _tabG[0] << _tabG[1] <<  _tabG[2] <<  _tabG[3];
    //barsData  << 1 << 2 <<  3 <<  4;
    bars->setData(ticks, barsData);
 }
void choose::plotAssourance(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->assu->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->assu->xAxis, ui->assu->yAxis);
    bars->setAntialiased(false);
    //bars->setStackingGap(4);
    bars->setPen(QPen(QColor(100, 100, 100).lighter(170)));
    bars->setBrush(QColor(50, 50, 50));
    // prepare x axis with country labels:
    QVector<double> ticks;
    QVector<QString> labels;
    ticks << 1  ;
    labels << "assurance" ;
    QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
    textTicker->addTicks(ticks, labels);
    ui->assu->xAxis->setTicker(textTicker);
    ui->assu->xAxis->setTickLabelRotation(10);
    ui->assu->xAxis->setSubTicks(false);
    ui->assu->xAxis->setTickLength(10, 5);
    ui->assu->xAxis->setRange(0, 0);
    ui->assu->xAxis->setBasePen(QPen(Qt::white));
    ui->assu->xAxis->setTickPen(QPen(Qt::white));
    ui->assu->xAxis->grid()->setVisible(true);
    ui->assu->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->assu->xAxis->setTickLabelColor(Qt::white);
    ui->assu->xAxis->setLabelColor(Qt::white);
    ui->assu->yAxis->setRange(0, 20000);
    // Add data:
    QVector<double> barsData;
    barsData  << _tabG[4] ;
    bars->setData(ticks, barsData);
}

void choose::plotBoursier(){
    // set dark background gradient:
    QLinearGradient gradient(0, 0, 0, 400);
    gradient.setColorAt(0, QColor(200, 220, 220));
    gradient.setColorAt(0.38, QColor(10, 105, 120));
    gradient.setColorAt(1, QColor(1, 90, 60));
    ui->bou->setBackground(QBrush(gradient));

    QCPBars *bars = new QCPBars(ui->bou->xAxis, ui->bou->yAxis);
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
    ui->bou->xAxis->setTicker(textTicker);
    ui->bou->xAxis->setTickLabelRotation(10);
    ui->bou->xAxis->setSubTicks(false);
    ui->bou->xAxis->setTickLength(10, 5);
    //ui->bou->xAxis->setRange(0, 100);
    ui->bou->xAxis->setBasePen(QPen(Qt::white));
    ui->bou->xAxis->setTickPen(QPen(Qt::white));
    ui->bou->xAxis->grid()->setVisible(true);
    ui->bou->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
    ui->bou->xAxis->setTickLabelColor(Qt::white);
    ui->bou->xAxis->setLabelColor(Qt::white);
    ui->bou->yAxis->setRange(0, 20000);


    // Add data:
    QVector<double> barsData;
    barsData  << _tabG[5] ;
    bars->setData(ticks, barsData);
}



choose::~choose()
{
    delete ui;
}
