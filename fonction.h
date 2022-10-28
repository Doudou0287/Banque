#ifndef FONCTION_H
#define FONCTION_H

#include <stdlib.h>
#include <dirent.h>
#include <sys/types.h>
#include <iostream>   // std::cout
#include <string>
#include <vector>
#include <fstream>
#include "date.h"
#include "agence.h"


extern string fichiers[100];

extern int arrLi[100];
extern int st,fi,num;
extern vector<Produit*> produitsAg[5];
//extern Agence agence[5];


void list_dir(const char *path, string *fich,int &cnt);
int minloc2(vector<int> v);
void arrangeeDate(Date *datefiche, int *arre,int siz);
void sorte(const int *daterdne,int *arre,int siz);
void lirefichier(vector<Produit*> &produitsAg1,string file);

#endif
