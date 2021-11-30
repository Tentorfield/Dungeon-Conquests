#include "Normal.hpp"

Normal::Normal(int Hth, int Atk, int PDef, int Mdef){
        Health = Hth;
        Attack = Atk;
        PhysicalDef = Pdef;
        MagicalDef = Mdef;
}

Normal::~Normal(){
        delete this;
}
        
int Normal::monsterHit(){
        return static_cast<int>(attack*1.1);
}

