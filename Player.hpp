#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include <iostream>
#include <string>
#include "stats/Stat.cpp"
#include <cmath>
using namespace std;

class Player{
	protected:
		string name;
		//Monster *Monster;
		int level;
		int expPoints;
		//int maxHealth;
		//int currentHealth;
		Stat* Stats;
		// no need for a local copy of player stats
		// when you want defense for example, just call Stats->getDefense();

		int freePoints;
		int currentHealth;

	public:
		Player();
	//	Player(string _name, int _currenthealth, int _maxHealth int _level, int _expPoints, int _freePoints);
		void setName(string _name);
		string getName();
		void setExp(int _exp);
		int getExp();
		void setLevel(int _level);
		int getLevel();
		void setCurrentHealth(int _currentHealth);
		int getCurrentHealth();
	//	void setHealth(int _health);
		int getMaxHealth();

		void setPoints(int _freePoints);
		int getPoints();
		void nextLevel();
