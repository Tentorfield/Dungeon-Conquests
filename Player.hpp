#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>

using namespace std;

class Player{
	private:
		string name;
		Stats *Stats;
		Monster *Monster;
		int level;
		int exp;
		double health; 
		double physicalAtkMult;
		double healthMult;
		double defenseMut;
	public:
		Player(){ };
		Player(string _name, double _health): name(_name), health(_health){}; 
		void setExp(){
			exp = 0;
		}
		int getExp(){
			return exp;
		}
		void setLevel(){
			level = 1;
		}
		int getLevel(){
			return level;
		}
		void nextLevel(int _level){
			level = _level;
			if (Monster->isEliminate){
				this->exp =  500 * pow(level, 2) - (500 * level);
				level++;
			}
		}
		virtual void specialHit() = 0;
		virtual double PhysicalHit() = 0;
		virtual double MagicalHit() = 0;
		virtual void Bonus(int level, double AtkMult, double MagicMult, double MagicMult, double HealthMult, double DefenseMult) = 0;
};
#endif 
