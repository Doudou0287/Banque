#include "prets.h"

Prets::Prets() {}

Prets::Prets(string nom_produit, double price, string nom_banquier, Date when, double interet) : Produit(nom_produit,price,nom_banquier,"prets"), _when(when), _interet(interet){}
Date Prets::getWhen() const 
{ 
	return _when; 
}
void Prets::setWhen(Date quand) 
{ 
	_when = quand; 
}
double Prets::getInteret() const 
{ 
	return _interet; 
}
void Prets::setInteret(double interet) 
{ 
	_interet = interet; 
}

Prets::~Prets() {}
