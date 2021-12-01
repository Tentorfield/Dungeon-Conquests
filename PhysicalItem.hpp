#ifndef __PHYSICAL_ITEM__
#define __PHYSICAL_ITEM__

#include "Item.hpp"

class PhysicalItem : public Item {
        public:
		~Item(){
			delete this;
		}
		
		PhysicalItem(){
			rarity = rand() % 3;
		}

                void setRarity(){
                        int rar = rand() % 3;
                        rarity = rar;
                        return;
                }

                int getRarity() {
                        return rarity;
                }
 
                void equip(Player* &player){
                        if (this->getRarity() == 0) {
				cout << "You equipped an Uncommon Physical Ring!" << endl;	
			}
			else if (this->getRarity() == 1) {
				cout << "You equipped the Common Physical Tome!" << endl;
			}
			else {
				cout << "You equipped a Rare Physical Weapon!" << endl;
			}
                }
	private:
		int rarity;
};

#endif
