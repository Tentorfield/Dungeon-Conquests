
#include "PhysicalAtk.hpp" 

    PhysicalAtk::PhysicalAtk() {
	// physicalAtkVal = player->getPhysicalAtkVal
    }

    void PhysicalAtk::increaseVal(int bonus) { 
	// dependant stats cannot have stats allocated to them
	// calculate() should be called automatically 
	this->physicalAtkVal = physicalAtkVal + bonus;
    }

    double PhysicalAtk::getVal() { 
	return physicalAtkVal;	
    }

    void PhysicalAtk::calculate(){ // helper function for increaseVal
	Stat* bodyObj = new Body;
	double bodyVal = bodyObj->getVal();
	return (bodyVal * 2);	
    }
