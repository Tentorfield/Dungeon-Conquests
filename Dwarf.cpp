#include "Dwarf.hpp"

Dwarf::Dwarf(double Hth, double Atk, double PDef, double Mdef){
	maxHealth = Hth;
	attack = Atk;
	physicalDef = Pdef;
	magicalDef = Mdef;
}

Dwarf::~Dwarf(){
	delete this;
}

double Dwarf::MonsterHit(){
	return attack*1.1;
}



