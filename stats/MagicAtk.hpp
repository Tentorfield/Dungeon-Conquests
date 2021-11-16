
#ifndef __MAGICATK_HPP__
#define __MAGICATK_HPP__

#include "../stats/Mind.hpp"

class MagicAtk : public Mind { 
    public:
        MagicAtk() { }
	void setMagicMult(double);
	double getMagicMult();
	virtual void increaseVal(int) { calculate(); }
	virtual double getVal() = 0;

    private:
	double MagicMult;
        virtual void calculate() = 0; // helper function for increaseVal

};

#endif //__MAGICATK_HPP__
