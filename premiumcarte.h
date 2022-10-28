#ifndef PREMIUMCARTE_H
#define PREMIUMCARTE_H
#include "cartes.h"


class PremiumCarte : public Cartes
{
    protected:
    public:
        PremiumCarte();
        PremiumCarte(string nom_produit, double price, string nom_banquier, double plafond, double frais, double balance);
        ~PremiumCarte();
};

#endif // PREMIUMCARTE_H
