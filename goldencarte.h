#ifndef GOLDENCARTE_H
#define GOLDENCARTE_H
#include "cartes.h"


class GoldenCarte : public Cartes
{
    protected:
    public:
        GoldenCarte();
        GoldenCarte(string nom_produit, double price, string nom_banquier, double plafond, double frais, double balance);
        virtual ~GoldenCarte();
};

#endif // GOLDENCARTE_H
