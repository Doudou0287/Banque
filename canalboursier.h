#ifndef CANALBOURSIER_H
#define CANALBOURSIER_H
#include "canal.h"


class CanalBoursier : public Canal
{
    protected:
        double gainsBoursier;
        int volumBoursier;

        vector<Boursier*> _boursier;
    public:
        CanalBoursier();
        void addboursier(Boursier  *b);
        double getGainsBoursier();

        int getVolumBoursier();
        void clear();
        void calcgains();

};

#endif // CANALBOURSIER_H
