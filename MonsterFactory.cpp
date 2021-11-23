#include "MonsterFactory.hpp"

#include <stdlib.h>
#include <time.h>

	MonsterFactory::MonsterFactory() {
		
		this->floor = 1;
	
	}

	MonsterFactory::MonsterFactory(int floor){
		
		this->floor = floor;

	}

	// generates a random monster based off the floor the player is on 
	Monster* GetMonster(){
		srand(time(NULL)); // initializes a random seed (makes rand actually random);
		int difficulty = floor * floor;			
		
		randomMonster->setAttack(rand() % (10 * difficulty) + (difficulty * difficulty)); // if floor is 1, the monster's attack will be between 1 and 10
		randomMonster->setPhysicalDef(rand() % (10 * difficulty) + (difficulty * difficulty)); // if floor is 2, the monster's physicalDef will be between 16 and 55
		randomMonster->setMagicalDef(rand() % (10 * difficulty) + (difficulty * difficulty)); // 
		randomMonster->setMaxHealth(10 * (rand() % (10 * difficulty) + (difficulty * difficulty))); // if floor is 2, the monster's health will be between 160 and 550
		
		// to incorperate different monster types we could do something like roll a 1-3 die for the type then do randomMonster->setClass(type);
		// then depending on the class of monster defense would change (like physicalDef * 10 for Ghost)
		return randomMonster; 
	}
