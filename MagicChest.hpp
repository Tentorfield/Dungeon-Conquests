#ifndef __MAGIC_CHEST__
#define __MAGIC_CHEST__

#include "Chest.hpp"

class MagicChest : public Chest {
        public:
                ~Chest(){
			delete this;
		}
		
                Item* itemFinder(){
			return new MagicItem();
		}
};

#endif

