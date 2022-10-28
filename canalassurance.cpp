#include "canalassurance.h"

CanalAssurance::CanalAssurance():  volumAssourance(0), gainsAssourance(0) {}
void CanalAssurance::addassurance(Assurances  *a)
{ 
	_assurances.push_back(a);
}
double CanalAssurance::getGainsAssourance(){
    return gainsAssourance;
}
void CanalAssurance::calcgains()
{
	for(int i=0; i< _assurances.end()-_assurances.begin();i++)
	{
        gainsAssourance+=_assurances[i]->getPrice();
    }
    gains=gainsAssourance;
    volumAssourance = _assurances.size();
    volum = volumAssourance;
}

int CanalAssurance::getVolumAssourance(){
    return volumAssourance;
}

void CanalAssurance::clear(){
    _assurances.clear();
}

CanalAssurance::~CanalAssurance() {}
