#ifndef __MONSTER_HPP__
#define __MONSTER_HPP__

#include "MonsterFactory.hpp"

class Monster{
	public:
		// note from Harrison: please use camelCase for function and variable names (first letter undercase) as per naming conventions.
		void setAttack(double val){};
		void setPhysicalDef(double val);
		void setMagicalDef(double val);
		void setMaxHealth(double val);
		double getAttack();
		double getMagicalDef();
		double getPhysicalDef();
		virtual double monsterHit() = 0;
	private:
		double maxHealth;
		double attack;
		double physicalDef;
		double magicalDef;
};

#endif
