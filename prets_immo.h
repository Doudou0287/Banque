#ifndef PRETS_IMMO_H
#define PRETS_IMMO_H
#include "prets.h"

class Prets_immo : public Prets
{
protected:
    string _adresse;
public:
    Prets_immo();
    Prets_immo(string nom_produit, double price, string nom_banquier, Date when, double interet, string adresse);
    string getAdresse() const;
    void setAdresse(string adresse);
    void afficher();
    ~Prets_immo();
//		LireDB() {}
};

#endif // PRETS_IMMO_H
