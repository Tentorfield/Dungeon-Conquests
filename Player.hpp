#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>
#include "stats/Stat.cpp"

using namespace std;

class Player{
	private:
		string name;
		Monster *Monster;
		int level;
		int expPoints;
		
		Stat* Stats;
		// no need for a local copy of player stats
		// when you want defense for example, just call Stats->getDefense();
		
		int freePoints;
		
	public:
		Player(){ };
		Player(string _name, double _health): name(_name), health(_health){}; 
		void setExp(int _exp){
			expPoints = _exp;
		}
		int getExp(){
			return exp;
		}
		void setLevel(int _level){
			level = _level;
		}
		int getLevel(){
			return level;
		}
		void nextLevel(int _level){
			level = _level;
			if (Monster->isEliminate){
				expPoints =  500 * pow(level, 2) - (500 * level);
				level++;
				freePoints += 10;
				// freePoints are gained on level up. 
				// The player can raise their stats by allocating points with 
				// Stats->allocatePoints(int bodyAllocation, int mindAllocation, int spiritAllocation); 
			}
		}

		string distributePoints() { 
			int bodyAllocation, mindAllocation, spiritAllocation;
			cout << "How many points would you like to invest in Body? ";
			cin >> bodyAllocation;	
			cout << "\nHow many points would you like to invest in Mind? ";
			cin >> mindAllocation;
			cout << "\nHow many points would you like to invest in Spirit? ";
			cin >> spiritAllocation;
			cout << endl;

			if ( freePoints < (bodyAllocation + mindAllocation + spiritAllocation) ) {
				return "insufficient free points";
			}

			Stats->allocatePoints(bodyAllocation, mindAllocation, spiritAllocation);
			return "Stats successfully allocated. See new stats? (y/n) ";
		}

		void displayPlayerStats() {
			cout << "\n________________\n" << "Body: " << Stats->getBody() << "\nMind: " << Stats->getMind()<< "\nSpirit: " << Stats->getSpirit()
			<< "\nPhysicalAttack Damage: " << Stats->getPhysicalAtk()<< "\nMagicalAttack Damage: " << Stats->getMagicAtk() 
			<< "\nDefense: " << Stats->getDefense() << "\nMax Health: " << Stats->getMaxHealth() << "\n_______________" << endl;
		}

		//virtual void specialHit() = 0;
		
		// when you want attack, just call Stats->getPhysicalAtk or Stats->getMagicAtk

};
#endif 
