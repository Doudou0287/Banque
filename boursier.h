#ifndef BOURSIER_H
#define BOURSIER_H
#include "produit.h"


class Boursier : public Produit
{
protected:
    double _frais;

public:
    Boursier();
    Boursier(string nom_produit, double price, string nom_banquier, double frais);
    double getFrais() const;
    void setFrais(double frais);
    void afficher();
    ~Boursier();
};

#endif // BOURSIER_H
