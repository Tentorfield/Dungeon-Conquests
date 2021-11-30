#include <iostream>
#include "Monster.hpp"

using namespace std;

void Monster::setAttack(int val){
	this->attack = val;
}

void Monster::setMaxHealth(int val){
	this->maxHealth = val;
}

void Monster::setPhysicalDef(int val){
	this->physicalDef = val;
}

void Monster::setMagicalDef(int val){
	this->magicalDef = val;
}

int  Monster::getAtk(){
	return this->attack;
}

int Monster::getMagicalDef(){
	return this->MagicalDef;
}

int Monster::getPhysicalDef(){
	return this->PhysicalDef;
}
