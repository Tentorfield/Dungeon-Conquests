#ifndef __MONSTER_HPP__
#define __MONSTER_HPP__

#include "MonsterFactory.hpp"

class Monster : MonsterFactory{
	public:
		void SetAtk(double val){};
		void SetPhysicalDef(double val);
		void SetMagicalDef(double val);
		double GetAtk();
		double GetMagicalDef();
		double GetPhysicalDef();
		virtual double MonsterHit() = 0;
	private:
		double Health;
		double Attack;
		double PhysicalDef;
		double MagicalDef;
		double MagicalDefMult;
		double PhysicalDefMult;
}

#endif
