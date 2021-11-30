#include "Player.hpp"


		Player::Player(){
			this->name = "";
			this->expPoints = 0;
			this->level = 1;
			this->expPoints = 0;
			this->freePoints = 0;
			this->Stats = new Stat();
		}

		/*Player::Player(string _name, int _health, int _level, int _expPoints, int _freePoints): name(_name), health(_health), level(_level), expPoints(_expPoints), freePoints(_freePoints){}; 
*/		
		void Player::setExp(int _exp){
			this->expPoints = _exp;
		}

		int Player::getExp(){
			return this->expPoints;
		}
		void Player::setLevel(int _level){
			this->level = _level;
		}
		int Player::getLevel(){
			return this->level;
		}
	//	void setHealth(int _health){
	//		health = _health;
	//	}
		int  Player::getMaxHealth(){
			return Stats->getMaxHealth();
		}
		void Player::setName(string _name){
			this->name = _name;
		}
		string Player::getName(){
			return this->name;
		}
		void Player::nextLevel(){
			static const int exp_cap[] = {0, 500, 1000, 3000, 6000, 10000, 15000, 21000, 30000, 50000, 80000, 100000, 999999};
			while (expPoints >= exp_cap[level]){
				expPoints +=  500 * pow(level, 2) - (500 * level);
				level++;
				freePoints += 10;
				// freePoints are gained on level up. 
				// The player can raise their stats by allocating points with 
				// Stats->allocatePoints(int bodyAllocation, int mindAllocation, int spiritAllocation); 
			}
		}

		string Player::distributePoints() { 
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

		void Player::displayPlayerStats() {
			cout << "\n________________\n" << "Body: " << Stats->getBody() << "\nMind: " << Stats->getMind()<< "\nSpirit: " << Stats->getSpirit()
			<< "\nPhysicalAttack Damage: " << Stats->getPhysicalAtk()<< "\nMagicalAttack Damage: " << Stats->getMagicAtk() 
			<< "\nDefense: " << Stats->getDefense() << "\nMax Health: " << Stats->getMaxHealth() << "\n_______________" << endl;
		}

