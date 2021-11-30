#ifndef __NORMAL__TEST__HPP__
#define __NORMAL__TEST__HPP__
#include "gtest/gtest.h"
#include "Normal.cpp"

TEST(NormalTest, getMaxHealth_Test){
	      Normal* NormalTest = new Normal();
	      NormalTest->setMaxHealth(50);
	      EXPECT_EQ(NormalTest->getMaxHealth(),50);
}

TEST(NormalTest, getAttack_Test){
	      Normal* NormalTest = new Normal();
	      NormalTest->setAttack(20);
	      EXPECT_EQ(NormalTest->getAttack(),20);
}

TEST(NormalTest, getMagicalDef_Test){
        Normal* NormalTest = new Normal():
	      NormalTest->setMagicalDef(20);
	      EXPECT_EQ(NormalTest->getMagicalDef(),20);
}

TEST(NormalTest, getPhysicalDef(){
	      Normal* NormalTest = new Normal();
	      NormalTest->setPhysicalDef(20);
	      EXPECT_EQ(NormalTest->getPhysicalDef(),20);
}

#endif
