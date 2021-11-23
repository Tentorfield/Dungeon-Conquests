#ifndef __MONSTER_HPP__
#define __MONSTER_HPP__

#include "MonsterFactory.hpp"

class Monster{
	public:
		// note from Harrison: please use camelCase for function and variable names (first letter undercase) as per naming conventions.
		void SetAtk(double val){};
		void SetPhysicalDef(double val);
		void SetMagicalDef(double val);
		void setMaxHealth(double val);
		double GetAtk();
		double GetMagicalDef();
		double GetPhysicalDef();
		//virtual double MonsterHit() = 0;
	private:
		double maxHealth;
		double Attack;
		double PhysicalDef;
		double MagicalDef;
		double MagicalDefMult;
		double PhysicalDefMult;
};

#endif
