#include "Hustler.h"

HUSTLER::HUSTLER(OBJHANDLE hVessel, int iFlightModel)
	: VESSEL3(hVessel, iFlightModel), subsystems(this)
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

void HUSTLER::clbkLoadStateEx(FILEHANDLE scn, void* vs)
{
	char *line;
	while (oapiReadScenario_nextline(scn, line))
	{
		ParseScenarioLineEx(line, vs);
	}
}

void HUSTLER::clbkPostCreation()
{

}

void HUSTLER::clbkPreStep(double simt, double simdt, double mjd) 
{

}

void HUSTLER::clbkPostStep(double simt, double simdt, double mjd)
{

}

void HUSTLER::clbkSaveState(FILEHANDLE scn) {
	VESSEL3::clbkSaveState(scn);
}