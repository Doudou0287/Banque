#include "prets_conso.h"

Prets_conso::Prets_conso()
{

}
Prets_conso::Prets_conso(string nom_produit, double price, string nom_banquier, Date when, double interet, string nom) : Prets(nom_produit, price, nom_banquier, when, interet), _nom(nom) {}
string Prets_conso::getNom() const 
{ 
	return _nom; 
}
void Prets_conso::setNom(string nom) 
{ 
	_nom = nom; 
}
void Prets_conso::afficher()
{
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier <<" , ";
	_when.afficher();
	cout<<", with " << _interet << " interet. Goes to " << _nom << endl ;
}
Prets_conso::~Prets_conso() {}
