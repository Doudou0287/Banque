#include "agence.h"
using namespace std;
Agence::Agence(){}
Agence::Agence(CanalBancaire cba, CanalAssurance ca, CanalBoursier cbo) : _cba(cba), _ca(ca), _cbo(cbo), gains(0) {}

CanalBancaire Agence::getCba() const
{
    return _cba;
}
 void Agence::setCba(CanalBancaire cba)
{
    _cba = cba;
}
CanalAssurance Agence::getCa() const
{
    return _ca;
}
void Agence::setCa(CanalAssurance ca)
{
    _ca = ca;
}

CanalBoursier Agence::getCbo() const
{
    return _cbo;
}
void Agence::setCbo(CanalBoursier cbo)
{
    _cbo = cbo;
}
void Agence::calcgains()
{
    gains= _cba.getgains()+_ca.getgains()+_cbo.getgains();
}
double Agence::getgains()
{
    return gains;
}
void Agence::rempli(vector<Produit*> &v)
{
    _cba.clear();
    _ca.clear();
    _cbo.clear();
    for(int i=0; i< v.end()-v.begin();i++)
    {
    	//cout<< "hiiiiiiiiiiiiiiii" <<endl;
        if (v[i]->getType()=="prets") 
            _cba.addprets(dynamic_cast<Prets*>(v[i]));
        else if (v[i]->getType()=="comptes") 
            _cba.addcomptes(dynamic_cast<Comptes*>(v[i]));
        else if (v[i]->getType()=="chequiers") 
            _cba.addchequiers(dynamic_cast<Chequiers*>(v[i]));
        else if (v[i]->getType()=="cartes") 
            _cba.addcartes(dynamic_cast<Cartes*>(v[i]));
        else if (v[i]->getType()=="assurances") 
            _ca.addassurance(dynamic_cast<Assurances*>(v[i]));
        else if (v[i]->getType()=="boursier") {
            _cbo.addboursier(dynamic_cast<Boursier*>(v[i]));
        }
        else 
        { 
            cout<<"Unexpected but strange yet fantastic Error"<<endl; 
            abort(); 
        }
    }

    _cba.calcgains();
    _ca.calcgains();
    _cbo.calcgains();
}

double *Agence::getGainst()
{
    gainst[0]=_cba.getGainsPrets();
    gainst[1]=_cba.getGainsComptes();
    gainst[2]=_cba.getGainsCarts();
    gainst[3]=_cba.getGainsChequiers();
    gainst[4]=_ca.getGainsAssourance();
    gainst[5]=_cbo.getGainsBoursier();
    gainst[6]=_cba.getgains() + _ca.getgains() + _cbo.getgains();
    return gainst;
}
int *Agence::getVolumt(){
    volumt[0]=_cba.getVolumPrets();
    volumt[1]=_cba.getVolumComptes();
    volumt[2]=_cba.getVolumCarts();
    volumt[3]=_cba.getVolumChequiers();
    volumt[4]=_ca.getVolumAssourance();
    volumt[5]=_cbo.getVolumBoursier();
    volumt[6]=_cba.getVolum() + _ca.getVolum() + _cbo.getVolum();
    return volumt;
}

Agence::~Agence(){}
