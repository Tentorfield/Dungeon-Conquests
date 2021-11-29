#include "Normal.hpp"

Normal::Normal(double Hth, double Atk, double PDef, double Mdef){
        Health = Hth;
        Attack = Atk;
        PhysicalDef = Pdef;
        MagicalDef = Mdef;
}

Normal::~Normal(){
        delete this;
}
        
double Normal::monsterHit(){
        return attack*1.1;
}

