#include "assurances.h"

Assurances::Assurances() {}
Assurances::Assurances(string nom_produit, double price, string nom_banquier, int duree) : Produit(nom_produit, price, nom_banquier, "assurances"), _duree(duree){}
int Assurances::getDuree() const 
{ 
	return _duree; 
}
void Assurances::setDuree(int during) 
{ 
	_duree = during; 
}
// void Assurances::afficher()
// {
// 	cout<<"Produit:"<<_nom_produit<<endl;
// }

Assurances::~Assurances() {}
