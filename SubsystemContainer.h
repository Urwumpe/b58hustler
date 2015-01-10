#pragma once
#include <OrbiterAPI.h>
#include <vector>

namespace core {
	
	class SubsystemContainer;
	class SubsystemState;
	class Subsystem;

	class SubsystemContainer {
	private:
		std::vector<Subsystem*> subsystems;
	public:
		SubsystemContainer(VESSEL* ref);
		~SubsystemContainer();
		void addSubsystem(Subsystem* subsys);
		virtual bool ParseScenarioLine(char* line);
		virtual void SaveSubsystemState(FILEHANDLE scn);
		virtual void PreStep(double simt, double simdt);
		virtual void PostStep(double simt, double simdt);
	};


};