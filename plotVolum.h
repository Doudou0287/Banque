#ifndef PLOTVOLUM_H
#define PLOTVOLUM_H

#include <QDialog>

namespace Ui {
class plot;
}

class plot : public QDialog
{
    Q_OBJECT

public:
    explicit plot(int *tab,QWidget *parent = nullptr);
    void setTab(int *tab);
    int* getTab();
    ~plot();

private slots:
    void plotBancaire();
    void plotAssourance();
    void plotBoursier();
private:
    Ui::plot *ui;
    int _tab[6];
};

#endif // PLOTVOLUM_H
