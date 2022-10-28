#ifndef ASSURANCES_H
#define ASSURANCES_H
#include "produit.h"

class Assurances : public Produit
{
protected:
    int _duree;
public:
    Assurances();
    Assurances(string nom_produit, double price, string nom_banquier, int duree);
    int getDuree() const;
    void setDuree(int during);
    virtual void afficher() = 0;
    ~Assurances();

};

#endif // ASSURANCES_H
