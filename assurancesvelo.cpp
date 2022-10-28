#include "assurancesvelo.h"

AssurancesVelo::AssurancesVelo() {}
AssurancesVelo::AssurancesVelo(string nom_produit, double price, string nom_banquier, int duree) : Assurances(nom_produit, price, nom_banquier, duree) {}
void AssurancesVelo::afficher()
{
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier <<", for " << _duree << " mois." << endl ;
}
AssurancesVelo::~AssurancesVelo() {}
