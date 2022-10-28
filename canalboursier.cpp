#include "canalboursier.h"

CanalBoursier::CanalBoursier() : gainsBoursier(0), volumBoursier(0){}
void CanalBoursier::addboursier(Boursier  *b)
{ 
	_boursier.push_back(b);
}
double CanalBoursier::getGainsBoursier(){
    return gainsBoursier;
}
int  CanalBoursier::getVolumBoursier()
{
    return volumBoursier;
}

void CanalBoursier::calcgains()
{
	for(int i=0; i< _boursier.end()-_boursier.begin();i++)
	{
        //_boursier[i]->afficher();
        gainsBoursier+=_boursier[i]->getPrice();
	}
    gains=gainsBoursier;
    volumBoursier = _boursier.size();
    volum = volumBoursier;
}

void CanalBoursier::clear(){
    _boursier.clear();
}
