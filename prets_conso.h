#ifndef PRETS_CONSO_H
#define PRETS_CONSO_H
#include "prets.h"

class Prets_conso : public Prets
{
    protected:
        string _nom;
    public:
        Prets_conso();
        Prets_conso(string nom_produit, double price, string nom_banquier, Date when, double interet, string nom);
        string getNom() const;
        void setNom(string nom);
    	void afficher();
        ~Prets_conso();
};

#endif // PRETS_CONSO_H
