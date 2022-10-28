#ifndef COMPTECOURANT_H
#define COMPTECOURANT_H
#include "comptes.h"

class CompteCourant : public Comptes
{
protected:
    //_tirer=vrai
    // visa visa yes
public:
    CompteCourant();
    CompteCourant(string nom_produit, double price, string nom_banquier, double balance, string username);
    ~CompteCourant();
};

#endif // COMPTECOURANT_H
