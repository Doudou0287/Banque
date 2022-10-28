#include "goldencarte.h"

GoldenCarte::GoldenCarte() {}
GoldenCarte::GoldenCarte(string nom_produit, double price, string nom_banquier, double plafond, double frais, double balance) : Cartes(nom_produit, price, nom_banquier, plafond, frais, balance) {}
GoldenCarte::~GoldenCarte() {}
