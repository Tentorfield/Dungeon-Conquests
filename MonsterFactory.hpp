#ifndef  __MONSTER_FACTORY_HPP__
#define  __MONSTER_FACTORY_HPP__

#include "Monster.cpp"
#include <stdlib.h>
#include <time.h>


class MonsterFactory {
    public:	
	MonsterFactory();
	MonsterFactory(int floor);
	
	// generates a monster with stats based off the floor the player is on 
	Monster* GetMonster();
		
    private: 
	Monster* randomMonster;
	int floor;
	
	/*double health 
	double healthMin;
	double healthMax;
	double attackMin;
	double attackMax;
	double physicalDefMin;
	double physicalDefMax;
	double magicalDefMin;
	double magicalDefMax;*/
};

#endif
