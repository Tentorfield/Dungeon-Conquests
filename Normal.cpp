#include "Normal.hpp"

Normal::Normal(double Hth, double Atk, double PDef, double Mdef, double MdefMult, double PDefMult ){
        Health = Hth;
        Attack = Atk;
        PhysicalDef = Pdef;
        MagicalDef = Mdef;
        MagicalDefMult = MdefMult;
        PhysicalDefMult = PDefMult;
}

Normal::~Normal(){
        //implement
}
        
double Normal::MonsterHit(){
        return Atk*1.1;
}

