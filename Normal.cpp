
#include "Normal.hpp"

Normal::Normal(int Hth, int Atk, int PDef, int Mdef){
	maxHealth = Hth;
	attack = Atk;
	physicalDef = Pdef;
	magicalDef = Mdef;
}

Normal::~Normal(){
	delete this;
}

int Normal::monsterHit(){
	return static_cast<int>attack*1.1;
}

void Normal::setAttack(int val){
	this->attack = val;
}

void Normal::setMaxHealth(int val){
	this->maxHealth = val;
}

void Normal::setPhysicalDef(int val){
	this->physicalDef = val;
}

void Normal::setMagicalDef(int val){
	this->magicalDef = val;
}

int Normal::getMaxHealth(){
	return this->maxHealth;
}

int  Normal::getAtk(){
	return this->attack;
}

int Normal::getMagicalDef(){
	return this->magicalDef;
}

int Normal::getPhysicalDef(){
	return this->physicalDef;
}

