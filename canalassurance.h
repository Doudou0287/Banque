#ifndef CANALASSURANCE_H
#define CANALASSURANCE_H
#include "canal.h"


class CanalAssurance : public Canal
{
    protected:
        vector<Assurances*> _assurances;
        int volumAssourance;

        double gainsAssourance;

    public:
        CanalAssurance();
        void addassurance(Assurances  *a);
        void calcgains();
        double getGainsAssourance();
        int getVolumAssourance();
        void clear();
        ~CanalAssurance();

};

#endif // CANALASSURANCE_H
