#ifndef COMPTES_H
#define COMPTES_H
#include "produit.h"

class Comptes : public Produit
{
    protected:
        //bool _tirer;
        double _balance;
        string  _username;
    public:
        Comptes();
        Comptes(string nom_produit, double price, string nom_banquier, double balance, string username);
        string getUsername() const;
        void setUsername(string username);
        double getBalance() const;
        void setBalance(double balance);
        void afficher();
        ~Comptes();
};

#endif // COMPTES_H
