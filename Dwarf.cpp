#include "Dwarf.hpp"

Dwarf::Dwarf(int Hth, int Atk, int PDef, int Mdef){
	maxHealth = Hth;
	attack = Atk;
	physicalDef = Pdef;
	magicalDef = Mdef;
}

Dwarf::~Dwarf(){
	delete this;
}

int Dwarf::MonsterHit(){
	return static_cast<int>attack*1.1;
}



