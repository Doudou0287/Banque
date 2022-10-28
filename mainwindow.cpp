#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <sys/types.h>
#include <string>
#include <dirent.h>
#include <QMessageBox>

using namespace std;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("MA BANQUE");
    setWindowIcon(QIcon(":/img/bank.jpg"));
    ui->comboBox->addItem("Directeur");
    for (int i=0; i<5; i++){
        ui->comboBox->addItem("Agence" + QString::number(i+1));
    }
    list_dir(pathChar,fichiers,num);
    string cutfich[num];
    Date datedefich[num];
    for(int i=0;i<num;i++)
    {
        Date d(stoi(fichiers[i].substr(10,2)),stoi(fichiers[i].substr(12,2)),stoi(fichiers[i].substr(14,4)));
        datedefich[i]=d;
        cutfich[i] = fichiers[i].substr(10,8);
    }
    arrangeeDate(datedefich,arrLi,num);

    for (int i=0; i<num; i++){
        ui->dateFrom->addItem( QString::number(datedefich[arrLi[i]].getD()) + "/" + QString::number(datedefich[arrLi[i]].getM()) + "/" + QString::number(datedefich[arrLi[i]].getY()));
    }
    for (int i=0; i<num; i++){
        ui->dateTo->addItem( QString::number(datedefich[arrLi[i]].getD()) + "/" + QString::number(datedefich[arrLi[i]].getM()) + "/" + QString::number(datedefich[arrLi[i]].getY()));
    }
}


void MainWindow::function( string pathAbs,int ind){
    string path, toString;
    for (int i=0;i<=4 ;i++ ) {
        produitsAg[i].clear();
    }
    for (int i=st;i<=fi;i++)
    {
        for(int j=0; j<5; j++)
        {
            toString = to_string(j+1);
            path = pathAbs + "agence" + toString + "/" + fichiers[arrLi[i]];
            lirefichier(produitsAg[j],path);
            cout<<"Finished Reading Agence" << toString << " /  " << path <<endl;

        }
    }
    switch (ind)
    {
        case 0:
            for(int i=0;i<5;i++) agence[i].rempli(produitsAg[i]);
            // puis plot le
           break;
        case 1:
             agence[0].rempli(produitsAg[0]);

             // puis plot le
            break;
        case 2:
             agence[1].rempli(produitsAg[1]);

             // puis plot le
            break;
        case 3:
             agence[2].rempli(produitsAg[2]);

             // puis plot le
            break;
        case 4:
             agence[3].rempli(produitsAg[3]);

             // puis plot le
            break;
        case 5:
             agence[4].rempli(produitsAg[4]);

             // puis plot le
            break;
        default:
            cout<<"Unexpected but strange yet fantastic Error"<<endl;
            abort();
    }
}
void MainWindow::on_validAgence_clicked()
{
    st = ui->dateFrom->currentIndex();
    fi = ui->dateTo->currentIndex();
    ind = ui->comboBox->currentIndex();
    function(pathabs, ind);
    if (ind==0)
    {
        int *tab2[5];
        for(int i=0;i<5;i++) tab2[i]=agence[i].getVolumt();
        directeur dir(tab2);
        dir.exec();
    }
    else
    {
        int *tab;
        tab=agence[ind-1].getVolumt();
        plot dia(tab);
        dia.exec();
    }

}

void MainWindow::on_validAgent_clicked()
{
    st = ui->dateFrom->currentIndex();
    fi = ui->dateTo->currentIndex();
    vector<Produit*> produitsAg[5];
    // à faire
}



void MainWindow::on_evalGains_clicked()
{
    st = ui->dateFrom->currentIndex();
    fi = ui->dateTo->currentIndex();
    ind = ui->comboBox->currentIndex();

    function(pathabs, ind);

    if (ind==0)
    {
        double *tabGains2[5];
        for(int i=0;i<5;i++) tabGains2[i]=agence[i].getGainst();
        dirGains dir(tabGains2);
        dir.exec();
    }
    else
    {
        double *tabGains;
        tabGains=agence[ind-1].getGainst();
        choose dia(tabGains);
        dia.exec();
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}
