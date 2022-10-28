#ifndef PRETS_H
#define PRETS_H
#include "produit.h"

class Prets : public Produit
{
    protected:
        Date _when;
        double _interet;
    public:
        Prets();
        Prets(string nom_produit, double price, string nom_banquier, Date when, double interet);
        Date getWhen() const ;
        void setWhen(Date quand);
        double getInteret() const;
        void setInteret(double interet);
        virtual void afficher() = 0;
        ~Prets();
//		virtual bool LireDB();
};

#endif // PRETS_H
