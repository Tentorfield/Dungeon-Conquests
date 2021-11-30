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
        return static_cast<int>(attack*1.1);
}

void Ghost::setAttack(int val){
	this->attack = val;
}

void Ghost::setMaxHealth(int val){
	this->maxHealth = val;
}

void Ghost::setPhysicalDef(int val){
	this->physicalDef = val;
}

void Ghost::setMagicalDef(int val){
	this->magicalDef = val;
}

int Ghost::getMaxHealth(){
	return this->maxHealth;
}

int  Ghost::getAtk(){
	return this->attack;
}

int Ghost::getMagicalDef(){
	return this->magicalDef;
}

int Ghost::getPhysicalDef(){
	return this->physicalDef;
}


