#include "auto.h"

Auto::Auto(){}
Auto::Auto(string nomAuto, string mark,int sinistre, double enginSize, double prix) : _nomAuto(nomAuto), _mark(mark), _sinistre(sinistre), _enginSize(enginSize), _prix(prix) {}
string Auto::getNomAuto() const 
{ 
	return _nomAuto; 
}
void Auto::setNomAuto(string nomAuto) 
{ 
	_nomAuto = nomAuto; 
}
string Auto::getMark() const 
{ 
	return _mark; 
}
void Auto::setMark(string mark) 
{ 
	_mark = mark; 
}
int Auto::getDriving_records() const 
{ 
	return _sinistre; 
}
void Auto::setDriving_records(int sinistre) 
{ 
	_sinistre = sinistre; 
}
double Auto::getEnginSize() const 
{ 
	return _enginSize; 
}
void Auto::setEnginSize(double enginSize) 
{ 
	_enginSize = enginSize; 
}
double Auto::getPrixAuto() const 
{ 
	return _prix; 
}
void Auto::setPrixAuto(double prix) 
{ 
	_prix = prix; 
}
void Auto::afficher()
{
	cout<<"	Name of Auto : "<<_nomAuto <<", Mark : "<< _mark << ", Sinistre : " << _sinistre << ", With : " << _enginSize <<" as engin size , with the price of "<< _prix << " euro"<< endl;
}
Auto::~Auto(){}
