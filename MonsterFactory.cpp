#include "MonsterFactory.hpp"

#include <stdlib.h>
#include <time.h>

	MonsterFactory::MonsterFactory() {
		
		this->floor = 1;
		randomMonster = nullptr;	
	}

	MonsterFactory::MonsterFactory(int _floor){
		
		this->floor = _floor;
		randomMonster = nullptr;
	}

	int MonsterFactory::getFloor(){
		return this->floor;
	}

	// generates a random monster based off the floor the player is on 
	Monster* MonsterFactory::getMonster(){
		srand(time(NULL)); // initializes a random seed (makes rand actually random);
		int difficulty = this->floor * this->floor;			
		
/*
		randomMonster->setAttack(rand() % (10 * difficulty) + (difficulty * difficulty)); // if floor is 1, the monster's attack will be between 1 and 10
		randomMonster->setPhysicalDef(rand() % (10 * difficulty) + (difficulty * difficulty)); // if floor is 2, the monster's physicalDef will be between 16 and 55
		randomMonster->setMagicalDef(rand() % (10 * difficulty) + (difficulty * difficulty)); // 
		randomMonster->setMaxHealth(10 * (rand() % (10 * difficulty) + (difficulty * difficulty))); // if floor is 2, the monster's health will be between 160 and 550
		
		// to incorperate different monster types we could do something like roll a 1-3 die for the type then do randomMonster->setClass(type);
		// then depending on the class of monster defense would change (like physicalDef * 10 for Ghost)
		return randomMonster;
*/

		int monsterType = rand() % 3;
		int normAtk = rand() % (5 * difficulty) + (difficulty * difficulty);
		int  normPDef = rand() % (5 * difficulty) + (difficulty);
		int  normMDef = rand() % (5 * difficulty) + (difficulty);
                int  normHth = 10 *( rand() % (5 * difficulty) + (difficulty * difficulty));

		if (monsterType = 0){
		//Normal Monster
		//double normDefAtk = rand() % (10 * difficulty) + (difficulty * difficulty); 
		//double normHth = 10 * rand() % (10 * difficulty) + (difficulty * difficulty);
		//randomMonster = new Normal(normHth, normDefAtk, normDefAtk, normDefAtk);
		randomMonster = new Normal(normHth, normAtk, normPDef, normMDef); 
		return randomMonster;
		} 
		else if (monsterType = 1){
		//Ghost Monster
		//double ghostAtk = rand() % (10 * difficulty) + (difficulty * difficulty);
		//double ghostPDef = 2 * rand() % (10 * difficulty) + (difficulty * difficulty);
		//double ghostMDef = 0.5 * rand() % (10 * difficulty) + (difficulty * difficulty);
		//double ghostHth = 10 * rand() % (10 * difficulty) + (difficulty * difficulty);
		randomMonster = new Ghost(normHth, normAtk, normPDef, normMDef); 
		return randomMonster;
		}
		else{
		//Dwarf Monster
		//double dwarfAtk = rand() % (10 * difficulty) + (difficulty * difficulty);
		//double dwarfPDef = 0.5 * rand() % (10 * difficulty) + (difficulty * difficulty);
		//double dwarfMDef = 2 * rand() % (10 * difficulty) + (difficulty * difficulty);
		//double dwarfHth = 10 * rand() % (10 * difficulty) + (difficulty * difficulty);
		//randomMonster = new Dwarf(dwarfHth, dwarfAtk, dwarfPDef, dwarfMdef);
		randomMonster = new Dwarf(normHth, normAtk, normPDef, normMDef); 
		return randomMonster;
		}                
	}
