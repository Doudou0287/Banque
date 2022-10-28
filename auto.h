#ifndef AUTO_H
#define AUTO_H
#include <iostream>
#include <string>

using namespace std;
class Auto
{
protected:
    string _nomAuto;
    string _mark;
    int _sinistre; // counts for how many accedents a person has and such
    double _enginSize;
    double _prix;

public:
    Auto();
    Auto(string nomAuto, string mark,int sinistre, double enginSize, double prix);
    string getNomAuto() const;
    void setNomAuto(string nomAuto);
    string getMark() const;
    void setMark(string mark);
    int getDriving_records() const;
    void setDriving_records(int sinistre);
    double getEnginSize() const;
    void setEnginSize(double enginSize);
    double getPrixAuto() const;
    void setPrixAuto(double prix);
    void afficher();
    ~Auto();
};

#endif // AUTO_H
