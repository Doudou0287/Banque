#ifndef CANAL_H
#define CANAL_H
#include "chequiers.h"
#include "boursier.h"
#include "prets_immo.h"
#include "prets_conso.h"
#include "prets_auto.h"
#include "assurancesauto.h"
#include "assurancesordi.h"
#include "assurancesvelo.h"
#include "comptelivreta.h"
#include "comptecourant.h"
#include "visacarte.h"
#include "goldencarte.h"
#include "premiumcarte.h"

class Canal
{
	protected:
        double gains;
        int volum;

	public:
		Canal();
		virtual void calcgains()=0;
		double getgains();
        int getVolum();
        virtual void clear()=0;
		~Canal();
};

#endif // CANAL_H
