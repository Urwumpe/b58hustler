#pragma once

#include <OrbiterAPI.h>
#include <VesselAPI.h>
#include "SubsystemContainer.h"
#include "GE-J79-5.h"

class HUSTLER : public VESSEL3
{
	PROPELLANT_HANDLE phForward;
	PROPELLANT_HANDLE phReserve;
	PROPELLANT_HANDLE phAft;
	PROPELLANT_HANDLE phBallast;

	PROPELLANT_HANDLE phPodForward;
	PROPELLANT_HANDLE phPodAft;

	PROPELLANT_HANDLE phLeftManifold;
	PROPELLANT_HANDLE phRightManifold;

	THRUSTER_HANDLE thEngine[4];
	THRUSTER_HANDLE thFuelDump;
	THRUSTER_HANDLE thCartStarter;

	THRUSTER_HANDLE thVirtualThrottle;
	
	VECTOR3 cg_offset;
	double nws_angle;

	ATTACHMENTHANDLE ahTug;
	ATTACHMENTHANDLE ahPod;
	ATTACHMENTHANDLE ahPylonL;
	ATTACHMENTHANDLE ahPylonR;

	core::SubsystemContainer subsystems;

	powerplant::J79_5 *engines[4];

	bool bIsEncapsulated[3];

	bool bUseEngineManagementAssist;
	bool bUseAINavigator;
	bool bUseAIDSO;
	bool bUseAIGroundObserver;

	//core::SubsystemContainer subsystems;
protected:
	void updateEmptyMass();
public:
	HUSTLER(OBJHANDLE hVessel, int iFlightModel);
	virtual ~HUSTLER();
	virtual void clbkSetClassCaps(FILEHANDLE cfg);
	virtual void clbkLoadStateEx(FILEHANDLE scn, void *vs);
	virtual void clbkSaveState(FILEHANDLE scn);
	virtual void clbkPostCreation();
	virtual void clbkPreStep(double simt, double simDT, double mjd);
	virtual void clbkPostStep(double simt, double simDT, double mjd);
	VECTOR3 calculateCG();
};