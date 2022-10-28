#ifndef CANALBANCAIRE_H
#define CANALBANCAIRE_H
#include "canal.h"


class CanalBancaire : public Canal
{
protected:
    double gainsPrets, gainsComptes, gainsCarts, gainsChequiers;

    int volumPrets, volumComptes, volumCarts, volumChequiers;

    vector<Prets*> _pret;
    vector<Comptes*> _comptes;
    vector<Chequiers*> _chequiers;
    vector<Cartes*> _cartes;
public:
    CanalBancaire();
    void addprets(Prets  *p);
    void addcomptes(Comptes  *c);
    void addchequiers(Chequiers  *ch);
    void addcartes(Cartes  *crt);
    void calcgains();
    double getGainsPrets();
    double getGainsCarts();
    double getGainsComptes();
    double getGainsChequiers();
    void clear();
    int getVolumPrets();
    int getVolumCarts();
    int getVolumComptes();
    int getVolumChequiers();
};

#endif // CANALBANCAIRE_H
