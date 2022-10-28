#ifndef VISACARTE_H
#define VISACARTE_H
#include "cartes.h"

class VisaCarte : public Cartes
{
protected:

public:
    VisaCarte();
    VisaCarte(string nom_produit, double price, string nom_banquier, double plafond, double frais, double balance);

    virtual ~VisaCarte();
};

#endif // VISACARTE_H
