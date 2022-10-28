#include "canalbancaire.h"

CanalBancaire::CanalBancaire(): gainsPrets(0), gainsComptes(0), gainsCarts(0), gainsChequiers(0),  volumPrets(0), volumComptes(0), volumCarts(0), volumChequiers(0) {}
void CanalBancaire::addprets(Prets  *p)
{ 
	_pret.push_back(p);
}
void CanalBancaire::addcomptes(Comptes  *c)
{ 
	_comptes.push_back(c);
}
void CanalBancaire::addchequiers(Chequiers  *ch)
{ 
	_chequiers.push_back(ch);
}
void CanalBancaire::addcartes(Cartes  *crt)
{ 
	_cartes.push_back(crt);
}
double CanalBancaire::getGainsPrets()
{
    return gainsPrets;
}
double CanalBancaire::getGainsCarts()
{
    return gainsCarts;
}
double CanalBancaire::getGainsComptes()
{
    return gainsComptes;
}
double CanalBancaire::getGainsChequiers()
{
    return gainsChequiers;
}

int  CanalBancaire::getVolumPrets()
{
    return volumPrets;
}
int  CanalBancaire::getVolumCarts()
{
    return volumCarts;
}
int  CanalBancaire::getVolumComptes()
{
    return volumComptes;
}
int  CanalBancaire::getVolumChequiers()
{
    return volumChequiers;
}
void CanalBancaire::calcgains()
{
	for(int i=0; i< _pret.end()-_pret.begin();i++)
	{
        gainsPrets+=_pret[i]->getPrice();
	}
	for(int i=0; i< _comptes.end()-_comptes.begin();i++)
	{
        gainsComptes+=_comptes[i]->getPrice();
	}
	for(int i=0; i< _chequiers.end()-_chequiers.begin();i++)
	{
        gainsChequiers+=_chequiers[i]->getPrice();
	}
	for(int i=0; i< _cartes.end()-_cartes.begin();i++)
	{
        gainsCarts+=_cartes[i]->getPrice();
	}
    volumPrets = _pret.size();
    volumCarts = _cartes.size();
    volumChequiers = _chequiers.size();
    volumComptes = _comptes.size();
    volum = volumPrets + volumCarts + volumChequiers + volumComptes;

     gains=gainsPrets+gainsComptes+gainsChequiers+gainsCarts;
}

void CanalBancaire::clear(){
    _pret.clear();
    _comptes.clear();
    _chequiers.clear();
    _cartes.clear();
}
