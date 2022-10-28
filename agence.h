#ifndef AGENCE_H
#define AGENCE_H
#include "canalassurance.h"
#include "canalbancaire.h"
#include "canalboursier.h"

class Agence
{
    protected :
        CanalBancaire _cba;
        CanalAssurance _ca;
        CanalBoursier  _cbo;
	double gains;
    int volum;
    int volumt[7];
    double gainst[7];
    public :
        Agence();
        Agence(CanalBancaire cba, CanalAssurance ca, CanalBoursier cbo);


        CanalBancaire getCba() const;
        void setCba(CanalBancaire cba);
        CanalAssurance getCa() const;
        void setCa(CanalAssurance ca);
        CanalBoursier getCbo() const;
        void setCbo(CanalBoursier cbo);
        void rempli(vector<Produit*> &v);
        void calcgains();
        double getgains();
        double *getGainst();
        int getVolum();
        int *getVolumt();

        
        ~Agence();
};

#endif // AGENCE_H
