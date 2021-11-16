
#ifndef __MIND_HPP__
#define __MIND_HPP__


class Mind : public Stat { 
    public:
        Mind() { }
	virtual void increaseVal(int) { calculate(); }
	virtual double getVal() = 0;

    private:
	double MindVal;
        virtual void calculate() = 0; // helper function for increaseVal

};

#endif //__MIND_HPP__
