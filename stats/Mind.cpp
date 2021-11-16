
#include "Mind.hpp" 

    Mind::Mind() {

    }

    void Mind::increaseVal(int allocatedPoints) { 
	
	this->mindVal = mindVal + allocatedPoints;
    }

    double Mind::getVal() { 
	return mindVal;	
    }

    void Mind::calculate(){ // helper function for increaseVal
	return mindVal;	
    }
