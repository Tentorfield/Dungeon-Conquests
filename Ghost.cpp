#include "Ghost.hpp"

Ghost::Ghost(double Hth, double Atk, double PDef, double Mdef, double MdefMult, double PDefMult ){
        Health = Hth;
        Attack = Atk;
        PhysicalDef = Pdef;
        MagicalDef = Mdef;
        MagicalDefMult = MdefMult;
        PhysicalDefMult = PDefMult;
}

Ghost::~Ghost(){
	//implement
}

double Ghost::MonsterHit(){
        return Atk*1.1;
}


