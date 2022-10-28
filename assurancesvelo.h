#ifndef ASSURANCESVELO_H
#define ASSURANCESVELO_H
#include "assurances.h"


class AssurancesVelo : public Assurances
{
protected:

public:
    AssurancesVelo();
    AssurancesVelo(string nom_produit, double price, string nom_banquier, int duree);
    void afficher();

    ~AssurancesVelo();
};

#endif // ASSURANCESVELO_H
