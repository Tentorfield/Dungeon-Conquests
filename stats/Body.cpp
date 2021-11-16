#include "../stats/Body.hpp" 

    Body::Body() {

    }

    void Body::increaseVal(int allocatedPoints) { 
	
	this->bodyVal = bodyVal + allocatedPoints;
    }

    double Body::getVal() { 
	return bodyVal;	
    }

    void Body::calculate(){ // helper function for increaseVal
	return bodyVal;	
    }
