
//#include "Player.hpp"
#include "Player.cpp"
#include "MonsterFactory.cpp"
#include <ostream>

using namespace std;

void introduction() { 
	cout << "Welcome to Dungeon Conquest! Would you like to know how to play? (y/n)" << endl;
	char input;
	cin >> input;
	if (input == 'y') { 
	    cout << "Great, let's get you started. Dungeon Conquest is a game about [insert description here]." 
		 << "\nHere are some useful tips. Press 'q' at any time to instantly quit the game. [More tips]. " << endl;
	}
}

// a fight method outline that (hopefully) can be used for every enemy the player encounters
void fight(Player* player, Monster* monster) { 
	cout << "You encounter a [class] monster!" << endl;
	int option = 0;
	while( (monster->getCurrentHP > 0) && (player->getCurrentHP > 0) ) { 
	    cout << "Choose an option: Inspect(1), Physical Attack(2), Magical Attack(3)" << endl;
	    cin >> option;
	    if (option == 1) { 
		monster->displayStats();
	    }
	    if (option == 2) { 
		monster->currentHP -= player->getPhysicalAttack(); 
		player->takeDamage(monster->getAttack);
	    }
	    if (option == 3) { 
		monster->currentHP -= player->getMagicalAttack(); 
	    }
	    else {
		cout << "invalid input, please try again" << endl;
	    }
	}
	if (monster->getCurrentHP <= 0) { 
	    cout << "You have defeated the [class] monster!" << endl;
	    // function for exp allocation is called
	    return;
	}
	else {
	    cout << "YOU DIED" << endl;
	    exit(1); // terminate program
	}
}


// this is a general outline of how the interface should be: as small and modular as possible with lots of helper functions

int main(){
    int option;
    char input = 0;
    bool endOfGame = false;

    while (endOfGame == false) { 

	introduction();

    	Player* Player = new Player();
	MonsterFactory* floorOneFactory = new MonsterFactory(1);
	fight(Player, floorOneFactory->getMonster());	

	while ( (input != 1) && (input != 2) && (input != 3) ) {
	    cout << "Where to next? Left door(1), Middle door(2), Right door(3)" << endl; 
	    cin >> input;
	    if (input == 1) { 
	
	    }
	    if (input == 2) { 

	    }
	    if (input == 3) { 

	    }
	    else { 
	        cout << "invalid input" << endl;
	    }
	}


    }

    return 0;
}

