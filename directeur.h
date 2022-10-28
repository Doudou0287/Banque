#ifndef DIRECTEUR_H
#define DIRECTEUR_H

#include <QDialog>

namespace Ui {
class directeur;
}

class directeur : public QDialog
{
    Q_OBJECT

public:
    explicit directeur(int **tab,QWidget *parent = nullptr);
    void setTab(int **tab);
    int* getTab();
    ~directeur();

private slots:
    void ag1();
    void ag2();
    void ag3();
    void ag4();
    void ag5();


private:
    Ui::directeur *ui;
    int _tab[5][6];
    int ymax;
};

#endif // DIRECTEUR_H
