#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Date
{
private:
        int _d, _m, _y;
    public:
        Date();
        Date(int d, int m, int y);
        void afficher() const;
        int rdn();
        double getD() const;
        void setD(int d);
        double getM() const;
        void setM(int m);
        double getY() const ;
        void setY(int y);

        //int operator-(Date const& actual) const;
        ~Date() {}
};

#endif // DATE_H
