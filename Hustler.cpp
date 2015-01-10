#include "Hustler.h"

HUSTLER::HUSTLER(OBJHANDLE hVessel, int iFlightModel)
	: VESSEL3(hVessel, iFlightModel)
{

}

HUSTLER::~HUSTLER()
{

}

void HUSTLER::clbkSetClassCaps(FILEHANDLE cfg)
{
	updateEmptyMass();
}

void HUSTLER::updateEmptyMass()
{

}

void HUSTLER::clbkPreStep(double simt, double simdt, double mjd) 
{

}

void HUSTLER::clbkPostStep(double simt, double simdt, double mjd)
{

}