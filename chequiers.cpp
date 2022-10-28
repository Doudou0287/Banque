#include "chequiers.h"

Chequiers::Chequiers() {}
Chequiers::Chequiers(string nom_produit, double price, string nom_banquier, double plafond) : Produit(nom_produit, price, nom_banquier, "chequiers"), _plafond(plafond) {}
double Chequiers::getplafond() const 
{ 
	return _plafond;
}
void Chequiers::setplafond(double plafond) 
{ 
	_plafond = plafond; 
}
void Chequiers::afficher()
{
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier 
	<<", with " << _plafond << " as a plafond. "<<endl;

}
Chequiers::~Chequiers() {}
