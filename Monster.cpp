#include <iostream>
#include "Monster.hpp"

using namespace std;

void Monster::setAttack(double val){
	this->attack = val;
}

void Monster::setMaxHealth(double val){
	this->maxHealth = val;
}

void Monster::setPhysicalDef(double val){
	this->physicalDef = val;
}

void Monster::setMagicalDef(double val){
	this->magicalDef = val;
}

double  Monster::getAtk(){
	return this->attack;
}

double Monster::getMagicalDef(){
	return this->MagicalDef;
}

double Monster::getPhysicalDef(){
	return this->PhysicalDef;
}
