#pragma once

namespace powerplant {


	class J79_5 {
		float fRPM;
		float fEGT;
		float fFuelFlow;
		float fEPR;
	protected:
		void calculateInletConditions();
	public:

	};
};