
#ifndef __DEFENSE_HPP__
#define __DEFENSE_HPP__

#include "../stats/Spirit.hpp"

class Defense : public Spirit { 
    public:
        Defense() { }
	void setDefenseMult(double);
	double getDefenseMult();
	virtual void increaseVal(int) { calculate(); }
	virtual double getVal() = 0;

    private:
	double DefenseMult;
        virtual void calculate() = 0; // helper function for increaseVal

};

#endif //__DEFENSE_HPP__
