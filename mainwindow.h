#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include "fonction.h"
#include "date.h"
#include "plotVolum.h"
#include "directeur.h"
#include "plotGains.h"
#include "dirgains.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_validAgence_clicked();
    void on_validAgent_clicked();
    void on_evalGains_clicked();

private:
    Ui::MainWindow *ui;
    int num;
    string fichiers[100];
    int arrLi[100];
    int st,fi,ind;

    string pathabs = "C:/Users/sundu/Documents/la banque/banque/database/";
    const char *pathChar = "C:/Users/sundu/Documents/la banque/banque/database/agence1/";
    vector<Produit*> produitsAg[5];
    Agence agence[5];
    void function(const string pathAbs, int ind);
};
#endif // MAINWINDOW_H
