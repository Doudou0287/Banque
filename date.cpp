#include "date.h"

Date::Date() : _d(1), _m(1), _y(2000) {}
Date::Date(int d, int m, int y) : _d(d), _m(m), _y(y) {}
void Date::afficher() const 
{ 
	cout << "Date :" << _d << "/" << _m << "/" << _y ;
}
int Date::rdn()
{
    int y = _y; int m = _m;
    if (_m < 3)
    {
        y = _y - 1;m = _m + 12;
    }
    return 365 * y + y / 4 - y / 100 + y / 400 + (153 * m - 457) / 5 + _d - 306;
}
double Date::getD() const
{
    return _d;
}
void Date::setD(int d) 
{ 
	_d = d; 
}
double Date::getM() const 
{ 
	return _m; 
}
void Date::setM(int m) 
{ 
	_m = m; 
}
double Date::getY() const 
{ 
	return _y; 
}
void Date::setY(int y) 
{ 
	_y = y; 
}
