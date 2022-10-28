#include "boursier.h"

Boursier::Boursier() {}
Boursier::Boursier(string nom_produit, double price, string nom_banquier, double frais) : Produit(nom_produit, price, nom_banquier, "boursier"), _frais(frais) {}
double Boursier::getFrais() const 
{ 
	return _frais; 
}
void Boursier::setFrais(double frais) 
{ 
	_frais = frais; 
}

void Boursier::afficher()
{
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier <<", with " << _frais << " as frais." << endl ;
}
Boursier::~Boursier() {}
