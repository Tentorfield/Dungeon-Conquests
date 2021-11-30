#ifndef __MONSTER_HPP__
#define __MONSTER_HPP__

#include "MonsterFactory.hpp"

class Monster{
	public:
		// note from Harrison: please use camelCase for function and variable names (first letter undercase) as per naming conventions.
		void setAttack(int val){};
		void setPhysicalDef(int val);
		void setMagicalDef(int val);
		void setMaxHealth(int val);
		void getMaxHealth();
		int getAttack();
		int getMagicalDef();
		int getPhysicalDef();
		virtual int monsterHit() = 0;
	private:
		int maxHealth;
		int attack;
		int physicalDef;
		int magicalDef;
};

#endif
