#include "produit.h"

Produit::Produit(){}
Produit::Produit(string nom_produit, double price, string nom_banquier, string t) : _nom_produit(nom_produit), _price(price), _nom_banquier(nom_banquier), type(t){}
string Produit::getNom_produit() const 
{ 
	return _nom_produit; 
}
void Produit::setNom_produit(string nom_produit) 
{ 
	_nom_produit = nom_produit; 
}
string Produit::getNom_banquier() const 
{ 
	return _nom_banquier; 
}
void Produit::setNom_banquier(string nom_banquier) 
{ 
	_nom_banquier = nom_banquier; 
}
double Produit::getPrice() const 
{ 
	return _price; 
}
void Produit::setPrice(double p) 
{ 
	_price = p; 
}
string Produit::getType() 
{
	return type;
}
void Produit::setType(string t) 
{
	type = t;
}
Produit::~Produit() {}
