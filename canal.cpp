#include "canal.h"

Canal::Canal(): gains(0) ,volum(0) {}
void Canal::calcgains(){}
double Canal::getgains()
{
	return gains;
}
int Canal::getVolum()
{
    //int getVolum();

    return volum;
}
Canal::~Canal(){}
