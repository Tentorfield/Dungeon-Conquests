#ifndef MAGE_HPP
#define MAGE_HPP
#include "Stats.cpp"
#include "PhysicalAtk.cpp"
#include "Health.cpp"
#include "Defense.cpp"
#include "MagicAtk.cpp"

using namespace std;

class Mage{
	private:
		double PhysicalHit;
		double MagicalHit;
	public:
		Mage(){ };
		Mage(double _physicalHit, double _magicalHit): PhysicalHit(_physicalHit), MagicalHit(_magicalHit){};
		double PhysicalHit(){
			return PhysicalHit;
		}
		double MagicalHit(){
			return PhysicalHit;
		}
		double SpecialHit(){
			return (PhysicalHit + MagicalHit);
		}
		void Bonus(int level, double AtkMult, double MagicMult, double HealthMult, double DefenseMult) = 0;
};
#endif
		
