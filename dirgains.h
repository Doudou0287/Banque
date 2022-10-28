#ifndef DIRGAINS_H
#define DIRGAINS_H

#include <QDialog>

namespace Ui {
class dirGains;
}

class dirGains : public QDialog
{
    Q_OBJECT

public:
    explicit dirGains(double **tabG,QWidget *parent = nullptr);
    void setTab(double **tabG);
    double* getTab();
    ~dirGains();

private slots:
    void ag1();
    void ag2();
    void ag3();
    void ag4();
    void ag5();

private:
    Ui::dirGains *ui;
    double _tabG[5][6];
    double ymax;
};

#endif // DIRGAINS_H

