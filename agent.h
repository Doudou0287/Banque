#ifndef AGENT_H
#define AGENT_H
#include <vector>
#include "produit.h"
#include "agence.h"


class Agent
{
    protected:
        vector<Produit*> _v;
        int _age;
        string _nomBanquier;
        double _gain;
    public:
        Agent();
        Agent( int age, string nomBanquier);
        string getNom_banquier() const;
        void setNom_banquier(string nomBanquier);
        int getAge() const;
        void setAge(int p);
        void calcgain();
        void rempli(vector<Produit*> &v);
        double getGain(){return _gain;}
        void gainAfficher(){cout<<"Gain: "<< _gain <<endl;}
        void afficher();
        virtual ~Agent();
};

#endif // AGENT_H
