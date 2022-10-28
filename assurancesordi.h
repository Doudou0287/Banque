#ifndef ASSURANCESORDI_H
#define ASSURANCESORDI_H
#include "assurances.h"
#include "electronique.h"

class AssurancesOrdi : public Assurances
{
    protected:
        Electronique _ordi;
    public:
        AssurancesOrdi();
        AssurancesOrdi(string nom_produit, double price, string nom_banquier, int duree, Electronique ordi);
        Electronique getOrdi() const;
        void setOrdi(Electronique ordi);
        void afficher();

        ~AssurancesOrdi();

};

#endif // ASSURANCESORDI_H
