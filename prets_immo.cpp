#include "prets_immo.h"

Prets_immo::Prets_immo()
{

}
Prets_immo::Prets_immo(string nom_produit, double price, string nom_banquier, Date when, double interet, string adresse) : Prets(nom_produit,price,nom_banquier,when,interet), _adresse(adresse) {}
string Prets_immo::getAdresse() const 
{ 
	return _adresse; 
}
void Prets_immo::setAdresse(string adresse) 
{ 
	_adresse = adresse; 
}
void Prets_immo::afficher()
{
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier <<" , ";
	_when.afficher();
	cout<<", with " << _interet << " interet. a l'adresse: "<< _adresse <<endl;
}

Prets_immo::~Prets_immo() {}
