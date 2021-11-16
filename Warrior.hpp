#ifndef WARRIOR_HPP
#define WARRIOR_HPP

using namespace std;

class Warrior{
	private:
		double PhysicalHit;
		double MagicalHit;
	public:
		Warrior(){ };
		double PhysicalHit() = 0;
		double MagicalHit() = 0;
		double SpecialHit() = 0;
		void Bonus(int level, double AtkMult, double MagicMult, double HealthMult, double DefenseMult) = 0;


#endif
