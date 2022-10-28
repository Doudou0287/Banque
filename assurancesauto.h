#ifndef ASSURANCESAUTO_H
#define ASSURANCESAUTO_H
#include "assurances.h"
#include "auto.h"

class AssurancesAuto : public Assurances
{
    protected:
        Auto _vehicule;
    public:
        AssurancesAuto();
        AssurancesAuto(string nom_produit, double price, string nom_banquier, int duree, Auto vehicule);
        Auto getVehicule() const;
        void setVehicule(Auto vehicule);
        void afficher();
        ~AssurancesAuto();
};

#endif // ASSURANCESAUTO_H
