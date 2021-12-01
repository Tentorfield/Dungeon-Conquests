#ifndef __PHYSICAL_CHEST__
#define __PHYSICAL_CHEST__

#include "Chest.hpp"
class PhysicalChest : public Chest {
        public:
                ~Chest(){
			delete this;
		}
                Item* itemFinder(){
			return new PhysicalItem();
		}
};

#endif

