#ifndef CHEQUIERS_H
#define CHEQUIERS_H
#include "produit.h"

class Chequiers : public Produit
{
    protected:
        double _plafond;

    public:
        Chequiers();
        Chequiers(string nom_produit, double price, string nom_banquier, double plafond);
        double getplafond() const;
        void setplafond(double plafond);
    	void afficher();
        ~Chequiers();

};

#endif // CHEQUIERS_H
