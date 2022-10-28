#ifndef CARTES_H
#define CARTES_H
#include "produit.h"

class Cartes : public Produit
{
    protected:
        double _plafond;
        double _frais;
        double _balance;
    public:
        Cartes();
        Cartes(string nom_produit, double price, string nom_banquier, double plafond, double frais, double balance);
        double getPlafond() const;
        void setPlafond(double plafond);
        double getFrais() const;
        void setFrais(double frais);
        double getBalance() const;
        void setBalance(double balance);
        void afficher();
        ~Cartes();
};

#endif // CARTES_H
