
#ifndef __STAT_HPP__
#define __STAT_HPP__

using namespace std;

class Stat { 
    public:
        /* Constructors */
        Stat() { }

    private:
	
        /* Pure Virtual Functions */
	virtual void increaseVal(int) = 0;
	virtual double getVal() = 0;
        virtual double calculate() = 0;

};

#endif //__STAT_HPP__
