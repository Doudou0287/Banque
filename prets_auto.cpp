#include "prets_auto.h"

Prets_auto::Prets_auto() {}
Prets_auto::Prets_auto(string nom_produit, double price, string nom_banquier, Date when, double interet, Auto vehicule) : Prets(nom_produit, price, nom_banquier, when, interet), _vehicule(vehicule) {}
Auto Prets_auto::getVehicule() const 
{ 
	return _vehicule;
}
void Prets_auto::setVehicule(Auto vehicule) 
{ 
	_vehicule = vehicule; 
}
void Prets_auto::afficher()
{
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier <<" , ";
	_when.afficher();
	cout<<", with " << _interet << " interet." << endl ;
	_vehicule.afficher();
}

Prets_auto::~Prets_auto() {}
