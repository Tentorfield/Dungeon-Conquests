
#ifndef __STAT_HPP__
#define __STAT_HPP__

using namespace std;

class Stat { 
    public:
        Stat() { }
	virtual void increaseVal(int) { calculate(); }
	virtual double getVal() = 0;

    private:
	double BodyVal;
        virtual void calculate() = 0; // helper function for increaseVal
};

#endif //__STAT_HPP__
