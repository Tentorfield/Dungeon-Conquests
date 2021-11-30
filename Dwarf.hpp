#ifndef __DWARF_HPP__
#define __DWARF_HPP__ 
#include "Monster.hpp"

class Dwarf : Monster {
	Public:
		Dwarf(int Hth, int Atk, int PDef, int Mdef);
		int monsterHit();
}



#endif
