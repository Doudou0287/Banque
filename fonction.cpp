#include "fonction.h"
using namespace std;
void list_dir(const char *path, string *fich,int &cnt)
{
    struct dirent *entry;
    string junk;

    DIR *dir = opendir(path);
    if (dir == NULL)
    {
        return;
    }
    cnt=0;

    while ((entry = readdir(dir)) != NULL)
    {
        junk=entry->d_name;
        if (junk[0]=='.') continue;
        fich[cnt]= entry->d_name;
        cnt++;
    }

    closedir(dir);
}

int minloc2(vector<int> v)
{
    int loc=100000000;
    int val=100000000;
    for(int i=0; i< v.end()-v.begin();i++)
    {
        if(v[i]<val)
        {
            loc = i;
            val = v[i];
        }
    }
       // cout << loc << "  " << val << endl;
    return loc;
}
void sorte(const int *daterdne,int *arre,int siz)
{
        vector<int> v(daterdne,daterdne+siz);
    int i;
    int minElIndex;
    for(i=0;i<siz;i++)
     {
        minElIndex = minloc2(v);

        arre[i]=minElIndex;
        v[minElIndex]=100000000;
       // cout << arre[i] << endl;
    }
}

void arrangeeDate(Date *datefiche, int *arre,int siz)
{
    int daterdne[siz];
    for (int i=0; i<siz; i++)
    {
        daterdne[i]=datefiche[i].rdn();
        //cout<<daterdne[i]<<endl;
    }

    sorte(daterdne,arre,siz);
}


void lirefichier(vector<Produit*> &produitsAg1,string file)
{
    ifstream fich(file);
    string junks;
    int junki;
    string agent;
    string type;
    string nom;
    double prix;

    string infos1,infos2,infos3,infos4;
    double infod1,infod2,infod3;
    int infoi1,infoi2;

    while(true)
    {
        fich>>junks>>junki;
        //cout<<junks<<" : "<<junki<<endl;
        if(fich.eof()) break;
        fich>>junks>>agent;
        getline(fich,junks);
        getline(fich,junks);

        type=junks.substr(9,sizeof(junks)-9);

        fich>>junks>>nom;
        fich>>junks>>prix;
////////////*bancaire*/////////////////////

///////////////////*prets*/////////////////
        if  (type=="Prets Immobilier")
        {
           fich>>junks>>infod1; //interet
           getline(fich,junks); // jump
           getline(fich,junks); // adresse
           infos1=junks.substr(9,sizeof(junks)-9); //adresse
           fich>>junks>>infos2; //date

           Date d(stoi(infos2.substr(0,2)),stoi(infos2.substr(3,2)),stoi(infos2.substr(6,4)));

           produitsAg1.push_back(new Prets_immo(nom,prix,agent,d,infod1,infos1));
        }
        else if (type == "Prets Consommation")
        {
           fich >> junks >> infod1 >>junks; //interet

           fich >> junks >> infos1; //date

           Date d(stoi(infos1.substr(0, 2)), stoi(infos1.substr(3, 2)), stoi(infos1.substr(6, 4)));

           fich >> junks >> infos2;
           produitsAg1.push_back(new Prets_conso(nom, prix, agent, d, infod1, infos2));
        }
        else if (type == "Prets Auto")
        {
           fich >> junks >> infod1>>junks; //interet
           fich >> junks >> infos1; //date
           Date d(stoi(infos1.substr(0, 2)), stoi(infos1.substr(3, 2)), stoi(infos1.substr(6, 4)));
           fich >> junks >> infos2; //nameAuto
           fich >> junks >> infos3; //Mark
           fich >> junks >> infod2; //Prix
           fich >> junks >> infoi1; //sinistre
           fich >> junks >> infod3 >> infos4; //size
           if (infos4 == "cc") infod3 /= 1000; // si en L bon, si en cc / 1000
           produitsAg1.push_back(new Prets_auto(nom, prix, agent, d, infod1, Auto(infos2, infos3, infoi1, infod3, infod2)));
        }
////////////////////* comptes *////////////////////
        else if (type == "Compte Courant")
        {
            fich >> junks >> infos1;  // username
            fich >> junks >> infod1; // balance

            produitsAg1.push_back(new CompteCourant(nom, prix, agent, infod1, infos1));
        }
        else if (type == "Compte LivretA")
        {
            fich >> junks >> infos1;  // username
            fich >> junks >> infod1; // balance

           produitsAg1.push_back(new CompteLivretA(nom, prix, agent, infod1, infos1));
        }
/////////////////////* chequiers*/////////////////////
       else if  (type=="Chequiers")
       {
           fich>>junks>>infod1;  // plafond

           produitsAg1.push_back(new Chequiers(nom,prix,agent,infod1));
       }
/////////////////////////////* cartes*////////////////
       else if  (type=="VisaCarte")
       {
           fich>>junks>>infod1;  // plafond
           fich>>junks>>infod2; //frais
           fich>>junks>>infod3; //Balance

           produitsAg1.push_back(new VisaCarte(nom,prix,agent,infod1,infod2,infod3));
       }
       else if (type == "Premium Carte")
       {
           fich >> junks >> infod1;  // plafond
           fich >> junks >> infod2; //frais
           fich >> junks >> infod3; //Balance

           produitsAg1.push_back(new PremiumCarte(nom, prix, agent, infod1, infod2, infod3));
        }
        else if (type == "Golden Carte")
        {
           fich >> junks >> infod1;  // plafond
           fich >> junks >> infod2; //frais
           fich >> junks >> infod3; //Balance
         //  cout<< "hiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii" << endl;


           produitsAg1.push_back(new GoldenCarte(nom, prix, agent, infod1, infod2, infod3));
        }
        else if  (type=="Assurance Auto")
        {
            fich>>junks>>infod1>>infos1;  // duree
            if(infos1=="Ans") infod1 *= 12; // si en mois, si ans *12
            fich>>junks>>infos2; //nomauto
            fich>>junks>>infos3; //mark
            fich>>junks>>infod2; //prix de voiture
            fich>>junks>>infoi1; //sinistre
            fich>>junks>>infod3>>infos1; //size
            if(infos1=="cc") infod3 /= 1000; // si en L bon, si en cc / 1000

            produitsAg1.push_back(new AssurancesAuto(nom,prix,agent,infod1,Auto(infos2,infos3,infoi1,infod3,infod2) ));
        }
/////////////////////////*Assurance*/////////////////:
        else if  (type=="Assurance Auto")
        {
           fich>>junks>>infod1>>infos1;  // duree
           if(infos1=="Ans") infod1 *= 12; // si en mois bon, si ans *12
           fich>>junks>>infos2; //nomauto
           fich>>junks>>infos3; //mark
           fich>>junks>>infod2; //prix de voiture
           fich>>junks>>infoi1; //sinistre
           fich>>junks>>infod3>>infos1; //size
           if(infos1=="cc") infod3 /= 1000; // si en L bon, si en cc / 1000

           produitsAg1.push_back(new AssurancesAuto(nom,prix,agent,infod1,Auto(infos2,infos3,infoi1,infod3,infod2) ));
        }
        else if (type == "Assurances Velo")
        {
           fich >> junks >> infod1 >> infos1;  // duree
           if (infos1 == "Ans") infod1 *= 12; // si en mois, si ans *12

           produitsAg1.push_back(new AssurancesVelo(nom, prix, agent, infod1));
        }
        else if (type == "Assurances Ordi")
        {
           fich >> junks >> infoi2 >> infos1;  // duree
           if (infos1 == "Ans") infod1 *= 12; // si en mois, si ans *12
           fich >> junks >> infos2; //nomElec
           fich >> junks >> infod2; //prix de Elec
           fich >> junks >> infoi1 >> infos3; //age
           if (infos3 == "Ans") infod1 *= 12; // si en mois, si ans *12

           produitsAg1.push_back(new AssurancesOrdi(nom, prix, agent, infoi2, Electronique(infos2, infod2, infoi1)));
        }
/////////////////////////*Boursier*///////////////////
        else if (type == "Boursier")
        {
           fich >> junks >> infod1;  // frais

           produitsAg1.push_back(new Boursier(nom, prix, agent, infod1));
        }

    }

}

