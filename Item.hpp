#ifndef __ITEM_HPP__
#define __ITEM_HPP__

#include "Player.cpp"

class Item {
	public: 
		virtual ~Item(){}
		virtual void equip(Player* player) = 0;
};

#endif
