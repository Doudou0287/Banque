#include "assurancesauto.h"

AssurancesAuto::AssurancesAuto() {}
AssurancesAuto::AssurancesAuto(string nom_produit, double price, string nom_banquier, int duree, Auto vehicule) : Assurances(nom_produit, price, nom_banquier, duree), _vehicule(vehicule) {}
Auto AssurancesAuto::getVehicule() const 
{ 
	return _vehicule;
}
void AssurancesAuto::setVehicule(Auto vehicule) 
{ 
	_vehicule = vehicule; 
}
void AssurancesAuto::afficher()
{
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier <<", for " << _duree << " mois." << endl ;
	_vehicule.afficher();
}
AssurancesAuto::~AssurancesAuto() {}
