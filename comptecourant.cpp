#include "comptecourant.h"

CompteCourant::CompteCourant(){}
CompteCourant::CompteCourant(string nom_produit, double price, string nom_banquier, double balance, string username) : Comptes(nom_produit, price, nom_banquier, balance, username) {}
CompteCourant::~CompteCourant() {}
