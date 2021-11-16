#include <iostream>
#include "Monster.hpp"

using namespace std;

void Monster::SetAtk(double val){
	this->Attack = val;
}

void Monster::SetPhysicalDef(double val){
	this->PhysicalDef = val;
}

void Monster::SetMagicalDef(double val){
	this->MagicalDef = val;
}

double  Monster::GetAtk(){
	return this->Attack;
}

double Monster::GetMagicalDef(){
	return this->MagicalDef;
}

double Monster::GetPhysicalDef(){
	return this->PhysicalDef;
}
