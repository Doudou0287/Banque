#ifndef PLOTGAINS_H
#define PLOTGAINS_H

#include <QDialog>

namespace Ui {
class choose;
}

class choose : public QDialog
{
    Q_OBJECT

public:
    explicit choose(double *tabG,QWidget *parent = nullptr);
    void setTab(double *tabG);
    double* getTab();
    ~choose();

private slots:
    void plotBancaire();
    void plotAssourance();
    void plotBoursier();


private:
    Ui::choose *ui;
    double _tabG[6];

};

#endif // PLOTGAINS_H

