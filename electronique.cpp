#include "electronique.h"

Electronique::Electronique() {}
Electronique::Electronique(string nom, double prix, int age) : _nom(nom), _prix(prix), _age(age) {}
string Electronique::getNomElec() const 
{ 
	return _nom; 
}
void Electronique::setPrixElec(string nom) 
{ 
	_nom = nom; 
}
double Electronique::getPrixElec() const 
{ 
	return _prix; 
}
void Electronique::setPrixElec(double prix) 
{ 
	_prix = prix; 
}
int Electronique::getAgeElec() const 
{ 
	return _age; 
}
void Electronique::setAgeElec(int age) 
{ 
	_age = age; 
}
void Electronique::afficher()
{
	cout<<" 	Name of this device : "<<_nom <<", it cousts : "<< _prix << ", age of device : " << _age <<" mois." << endl ;
}
Electronique::~Electronique() {}
