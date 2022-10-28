#include "cartes.h"

Cartes::Cartes(){}
Cartes::Cartes(string nom_produit, double price, string nom_banquier, double plafond, double frais, double balance) : Produit(nom_produit, price, nom_banquier, "cartes"), _plafond(plafond), _frais(frais), _balance(balance) {}
double Cartes::getPlafond() const 
{ 
	return _plafond;
}
void Cartes::setPlafond(double plafond) 
{ 
	_plafond = plafond; 
}
double Cartes::getFrais() const 
{ 
	return _frais;
}
void Cartes::setFrais(double frais) 
{ 
	_frais = frais; 
}
double Cartes::getBalance() const 
{ return 
	_balance; 
}
void Cartes::setBalance(double balance) 
{ 
	_balance = balance; 
}
void Cartes::afficher()
{
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier 
	<<", with " << _plafond << " as a plafond, "<< _frais << " as frais, and " << _balance<< " as a balance." <<endl;
}

Cartes::~Cartes() {}
