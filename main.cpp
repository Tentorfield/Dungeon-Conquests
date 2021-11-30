
#include "Player.cpp"
//#include "MonsterFactory.hpp"
#include <iostream>

using namespace std;

void introduction(Player* &player) { 
	cout << "Welcome to Dungeon Conquest! Would you like to know how to play? Press 'Y/y' if so." << endl;
	char input;
	cin >> input;
	if (input == 'y' || input == 'Y') { 
	    cout << "Great, let's get you started. Dungeon Conquest is a game about adventure and slaying monsters." 
		 << "\nFollow the directions for inputs for each of your character actions. Play to your heart's content! " << endl;
	}
	cout << "What is your name, traveler?" << endl;
	string name;
	cin.ignore();
	getline(cin, name);
	player->setName(name);
	cout << "Welcome, " << name << " you have just entered the dungeon!" << endl;
	return;
}

// a fight method outline that (hopefully) can be used for every enemy the player encounters
void fight(Player* &player, Monster* monster, bool &endOfGame) { 
	cout << "You encounter a " << monster->monsterType() << "!" << endl;
	int option = 0;
	int mHth = monster->getMaxHealth();
	cout << "The monster's health is at " << mHth << endl << "Your player's health is at " << player->getCurrentHealth() << endl;
	while( (mHth > 0) && (player->getCurrentHealth() > 0) ){ 
	    cout << "Choose an option: Inspect(1), Physical Attack(2), Magical Attack(3)" << endl;
	    cin >> option;
	    if (option == 1) { 
		//monster->displayStats();
		cout << "MONSTER TYPE: " <<  monster->monsterType() << endl;
		cout << "ATTACK:" << monster->getAttack() << endl;
		cout << "MAGICAL DEF: " << monster->getMagicalDef() << endl;
		cout << "PHYSICAL DEF: " << monster->getPhysicalDef() << endl;
	    }
	    else if (option == 2) {
		int damage = player->Stats->getPhysicalAtk() - monster->getPhysicalDef();
		if (damage < 0){
			damage = 0;
		} 
		cout << "You attack the monster and deal " << damage << " damage!" << endl;
		mHth -= damage;
		cout << "The monster counter-attacked! You took " << monster->monsterHit() << " damage." << endl; 
		player->setCurrentHealth(player->getCurrentHealth() - monster->monsterHit());
		cout << "Monster Health : " << mHth << endl;
		cout << "Player Health : " << player->getCurrentHealth() << endl;	
	    }
	    else if (option == 3) {	 
		int damage = player->Stats->getMagicAtk() - monster->getMagicalDef();
		if (damage < 0){
			damage = 0;
		} 
		cout << "You attack the monster and deal " << damage << " damage!" << endl;
                mHth -= damage;
                cout << "The monster counter-attacked! You took " << monster->monsterHit() << " damage." << endl;
                player->setCurrentHealth(player->getCurrentHealth() - monster->monsterHit());
                cout << "Monster Health : " << mHth << endl;
                cout << "Player Health : " << player->getCurrentHealth() << endl;

	    }
	    else {
		cout << "Invalid input, please try again." << endl;
	    }
	}
	if (mHth <= 0) { 
	    	cout << "You have defeated the " << monster->monsterType() << "!" << endl;
		player->nextLevel();
	    // function for exp allocation is called
	    return;
	}
	else {
	    cout << "YOU DIED" << endl;
	    endOfGame = true;
	    return;
	}
}


// this is a general outline of how the interface should be: as small and modular as possible with lots of helper functions

int main(){
    int  input = 0;
    bool endOfGame = false;
    int floor = 1;
 
    Player* player = new Player();	

    introduction(player);

    MonsterFactory* factory = new MonsterFactory(floor);
    
    while (endOfGame != true){	
	    cout << "Where to next? Left door(1), Middle door(2), Right door(3), Player Stats(4)" << endl; 
	    cin >> input;
	    if (input == 1) { 
		int outcome = rand() % 2;

		if(player->getLevel() > factory->getFloor()){
		    int nextFloor = rand() % 2;
			if (nextFloor == 1){	
				MonsterFactory* tmp = factory;
				floor = floor + 1;
				factory  = new MonsterFactory(floor);
				delete tmp;
				cout << "You've reached a staircase and have entered a new floor!" << endl;
				player->setCurrentHealth(player->getMaxHealth());
                                cout << "Health is restored! Total health: " << player->getCurrentHealth() << endl;

			}	
		}
	        
		if (outcome == 1){
                   fight(player, factory->getMonster(), endOfGame);
                }
		else {
		   cout << "You tread carefully through the corridor..." << endl;
		}

    	    }
	    else if (input == 2) { 
                int outcome = rand() % 2;

                if(player->getLevel() > factory->getFloor()){
                    int nextFloor = rand() % 2;
                        if (nextFloor == 1){
                                MonsterFactory* tmp = factory;
                                floor = floor + 1;
                                factory  = new MonsterFactory(floor);
                                delete tmp;
				cout << "You've reached a staircase and have entered a new floor!" << endl;
				player->setCurrentHealth(player->getMaxHealth());
				cout << "Health is restored! Total health: " << player->getCurrentHealth() << endl;  
                        }
                }

                if (outcome == 1){
                   fight(player, factory->getMonster(), endOfGame);
                }
                else {
                   cout << "You hear strange sounds echo throughout the dungeon..." << endl;
                }
	    }
	    else if (input == 3) { 
                int outcome = rand() % 2;

                if(player->getLevel() > factory->getFloor()){
                    int nextFloor = rand() % 2;
                        if (nextFloor == 1){
                                MonsterFactory* tmp = factory;
                                floor = floor + 1;
                                factory  = new MonsterFactory(floor);
                                delete tmp;
				cout << "You've reached a staircase and have entered a new floor!" << endl;
				player->setCurrentHealth(player->getMaxHealth());
                                cout << "Health is restored! Total health: " << player->getCurrentHealth() << endl;

                        }
                }

                if (outcome == 1){
                   fight(player, factory->getMonster(), endOfGame);
                }
                else {
                   cout << "You tread carefully through the corridor..." << endl;
                }

	    }
            else if (input == 4){
		player->displayPlayerStats();
	    }
	    else { 
	        cout << "Invalid input" << endl;
	    }
	}

    return 0;
}

