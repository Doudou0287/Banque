#include "comptes.h"

Comptes::Comptes() {}

Comptes::Comptes(string nom_produit, double price, string nom_banquier, double balance, string username) : Produit(nom_produit, price, nom_banquier, "comptes"), _balance(balance), _username(username){}
string Comptes::getUsername() const 
{ 
	return _username;
}
void Comptes::setUsername(string username) 
{ 
	_username = username; 
}
double Comptes::getBalance() const 
{ 
	return _balance; 
}
void Comptes::setBalance(double balance) 
{ 
	_balance = balance; 
}
void Comptes::afficher(){
	cout<<"Produit : "<<_nom_produit <<", Price : "<< _price << ", sold by : " << _nom_banquier 
	<<" to the username " << _username << ", with " << _balance<< " as a balance." <<endl;
}

Comptes::~Comptes() {}
