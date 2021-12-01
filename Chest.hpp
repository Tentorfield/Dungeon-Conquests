#ifndef __CHEST__
#define __CHEST__

#include "Item.hpp"

class Chest {
        public:
                virtual ~Chest();
		virtual Item* itemFinder() = 0;
};

#endif
