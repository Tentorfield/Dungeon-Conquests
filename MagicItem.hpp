#ifndef __MAGIC_ITEM__
#define __MAGIC_ITEM__

#include "Item.hpp"

class MagicItem : public Item {
	public:
                ~Item(){
                        delete this;
                }

                MagicItem(){
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
                                cout << "You equipped an Uncommon Magic Ring!" << endl;
                        }
                        else if (this->getRarity() == 1) {
                                cout << "You equipped the Common Magic  Necklace!" << endl;
                        }
                        else {
                                cout << "You equipped a Rare Magic Tome!" << endl;
                        }
		}
	public:
		int rarity;
};

#endif
