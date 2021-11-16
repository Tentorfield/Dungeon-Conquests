#ifndef MAGE_HPP
#define MAGE_HPP

using namespace std;

class Mage{
	private:
		double PhysicalHit;
		double MagicalHit;
	public:
		Mage(){ };
		double PhysicalHit() = 0;
		double MagicalHit() = 0;
		double SpecialHit() = 0;
		void Bonus(int level, double AtkMult, double MagicMult, double HealthMult, double DefenseMult) = 0;


#endif
		
