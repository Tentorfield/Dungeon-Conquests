
#ifndef __PHYSICAL_ATK_HPP__
#define __PHYSICAL_ATK_HPP__


class PhysicalAtk : public Stat { 
    public:
        PhysicalAtk() { }
	virtual void increaseVal(int) { calculate(); }
	virtual double getVal() = 0;

    private:
	double PhysicalAtkVal;
        virtual void calculate() = 0; // helper function for increaseVal

};

#endif //__PHYSICAL_ATK_HPP__
