#define ORBITER_MODULE
#include <OrbiterAPI.h>
#include <VesselAPI.h>
#include "Hustler.h"

DLLCLBK VESSEL* ovcInit(OBJHANDLE hVessel, int iFlightModel) 
{
	return new HUSTLER(hVessel, iFlightModel);
}

DLLCLBK void ovcExit(VESSEL* pVessel) 
{
	delete static_cast<HUSTLER*>(pVessel);
}