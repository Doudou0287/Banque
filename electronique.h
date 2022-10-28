#ifndef ELECTRONIQUE_H
#define ELECTRONIQUE_H
#include <iostream>
#include <string>

using namespace std;

class Electronique
{
    protected:
        string _nom;
        double _prix;
        int _age;
    public:
        Electronique();
        Electronique(string nom, double prix, int age);
        string getNomElec() const;
        void setPrixElec(string nom);
        double getPrixElec() const ;
        void setPrixElec(double prix);
        int getAgeElec() const;
        void setAgeElec(int age);
        void afficher();

        ~Electronique();
};

#endif // ELECTRONIQUE_H
