#ifndef PRODUIT_H
#define PRODUIT_H
#include <vector>
#include "date.h"

class Produit
{
    protected:
        string _nom_produit;
        double _price;
        string _nom_banquier;
        string type;
    public:
        Produit();
        Produit(string nom_produit, double price, string nom_banquier, string t);
        string getNom_produit() const;
        void setNom_produit(string nom_produit);
        string getNom_banquier() const;
        void setNom_banquier(string nom_banquier);
        double getPrice() const;
        void setPrice(double p);
        string getType();
        void setType(string t);
        virtual void afficher() = 0;

        virtual ~Produit();
//		virtual LireDB() ;
};

#endif // PRODUIT_H
