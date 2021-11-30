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

int Dwarf::DwarfHit(){
	return static_cast<int>attack*1.1;
}

void Dwarf::setAttack(int val){
	this->attack = val;
}

void Dwarf::setMaxHealth(int val){
	this->maxHealth = val;
}

void Dwarf::setPhysicalDef(int val){
	this->physicalDef = val;
}

void Dwarf::setMagicalDef(int val){
	this->magicalDef = val;
}

int Dwarf::getMaxHealth(){
	return this->maxHealth;
}

int  Dwarf::getAtk(){
	return this->attack;
}

int Dwarf::getMagicalDef(){
	return this->magicalDef;
}

int Dwarf::getPhysicalDef(){
	return this->physicalDef;
}

