#include "agent.h"


Agent::Agent(){}
Agent::Agent(int age, string nomBanquier) :  _age(age), _nomBanquier(nomBanquier), _gain(0){}

string Agent::getNom_banquier() const 
{ 
	return _nomBanquier; 
}
void Agent::setNom_banquier(string nom_banquier) 
{ 
	_nomBanquier = nom_banquier; 
}
int Agent::getAge() const 
{ 
	return _age; 
}
void Agent::setAge(int a) 
{ 
	_age = a; 
}

void Agent::rempli(vector<Produit*> &v)
{
    for(int i=0; i< v.end()-v.begin();i++)
    {
    	//cout<< "hiiiiiiiiiiiiiiii" <<endl;
        if (v[i]->getNom_banquier()==_nomBanquier) 
	    _v.push_back(v[i]);
    }

    calcgain();

}


void Agent::calcgain()
{
    for(int i=0; i< _v.end()-_v.begin();i++)
     _gain+=_v[i]->getPrice();

}
void afficher(){}
Agent::~Agent() {}
