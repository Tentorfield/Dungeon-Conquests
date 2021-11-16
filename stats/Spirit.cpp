

#include "Spirit.hpp" 

    Spirit::Spirit() {

    }

    void Spirit::increaseVal(int allocatedPoints) { 
	
	this->spiritVal = spiritVal + allocatedPoints;
    }

    double Spirit::getVal() { 
	return spiritVal;	
    }

    void Spirit::calculate(){ // helper function for increaseVal
	return;	
    }
