#include "Dwarf.hpp"

Dwarf::Dwarf(double Hth, double Atk, double PDef, double Mdef, double MdefMult, double PDefMult ){
	Health = Hth;
	Attack = Atk;
	PhysicalDef = Pdef;
	MagicalDef = Mdef;
	MagicalDefMult = MdefMult;
	PhysicalDefMult = PDefMult;
}

Dwarf::~Dwarf(){
	//implement
}

double Dwarf::MonsterHit(){
	return Atk*1.1;
}



