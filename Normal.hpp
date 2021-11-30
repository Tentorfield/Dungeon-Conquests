#ifndef __NORMAL_HPP__
#define __NORMAL_HPP__
#include "Monster.hpp"

class Normal : Monster {
        Public:
                Normal(int Hth, int Atk, int PDef, int Mdef);
                int monsterHit();
		~Normal();
		// note from Harrison: please use camelCase for function and variable names (first letter undercase) as per naming conventions.
		void setAttack(int val);
		void setPhysicalDef(int val);
		void setMagicalDef(int val);
		void setMaxHealth(int val);
		void getMaxHealth();
		int getAttack();
		int getMagicalDef();
		int getPhysicalDef();
		int monsterHit();

};

#endif

