#ifndef COMPTELIVRETA_H
#define COMPTELIVRETA_H
#include "comptes.h"

class CompteLivretA : public Comptes
{
    protected:
        //_tirer=faux
        //no visacard
    public:
        CompteLivretA();
        CompteLivretA(string nom_produit, double price, string nom_banquier, double balance, string username);

        ~CompteLivretA();
};

#endif // COMPTELIVRETA_H
