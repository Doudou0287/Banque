#include "assurancesordi.h"

AssurancesOrdi::AssurancesOrdi() {}
AssurancesOrdi::AssurancesOrdi(string nom_produit, double price, string nom_banquier, int duree, Electronique ordi) : Assurances(nom_produit, price, nom_banquier, duree), _ordi(ordi) {}
Electronique AssurancesOrdi::getOrdi() const 
{ 
	return _ordi; 
}
void AssurancesOrdi::setOrdi(Electronique ordi) 
{ 
	_ordi = ordi; 
}
void AssurancesOrdi::afficher()
{
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier <<", for " << _duree << " mois." << endl ;
	_ordi.afficher();
}
AssurancesOrdi::~AssurancesOrdi() {}
