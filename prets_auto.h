#ifndef PRETS_AUTO_H
#define PRETS_AUTO_H
#include "prets.h"
#include "auto.h"

class Prets_auto : public Prets
{
protected:
    Auto _vehicule;
public:
    Prets_auto();
    Prets_auto(string nom_produit, double price, string nom_banquier, Date when, double interet, Auto vehicule);
    Auto getVehicule() const;
    void setVehicule(Auto vehicule);
    void afficher();
    ~Prets_auto();

};

#endif // PRETS_AUTO_H
