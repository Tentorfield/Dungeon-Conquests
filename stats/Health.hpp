#ifndef __HEALTH_HPP__
#define __HEALTH_HPP__

#include "../stats/Body.hpp"
#include "../stats/Spirit.hpp"

class Health : public Body, public Spirit { 
    public:
        Health() { }
	void setHealthAttribute(double);
	double getHealthAttribute();
	virtual void increaseVal(int) { calculate(); }
	virtual double getVal() = 0;

    private:
	double HealthMult;
        virtual void calculate() = 0; // helper function for increaseVal

};

#endif //__HEALTH_HPP__
