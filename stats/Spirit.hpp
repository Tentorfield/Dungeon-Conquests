
#ifndef __SPIRIT_HPP__
#define __SPIRIT_HPP__

#include "Stat.hpp"

class Spirit : public Stat { 
    public:
        Spirit();
	virtual void increaseVal(int) { calculate(); }
	virtual double getVal() = 0;

    private:
	double spiritVal;
        virtual void calculate() = 0; // helper function for increaseVal

};

#endif //__SPIRIT_HPP__
