#include "Ghost.hpp"

Ghost::Ghost(double Hth, double Atk, double PDef, double Mdef){
        maxHealth = Hth;
        attack = Atk;
        physicalDef = Pdef;
        magicalDef = Mdef;
}

Ghost::~Ghost(){
	delete this;
}

double Ghost::monsterHit(){
        return attack*1.1;
}


