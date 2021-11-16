
#ifndef __BODY_HPP__
#define __BODY_HPP__


class Body : public Stat { 
    public:
        Body() { }
	virtual void increaseVal(int) { calculate() }
	virtual double getVal() = 0;

    private:
	double BodyVal;
        virtual void calculate() = 0; // helper function for increaseVal

};

#endif //__BODY_HPP__
