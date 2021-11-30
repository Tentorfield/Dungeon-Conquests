#ifndef __DWARF__TEST__HPP__
#define __DWARF__TEST__HPP__
#include "gtest/gtest.h"
#include "Dwarf.cpp"

TEST(DwarfTest, getPhysicalDef(){
	Dwarf* DwarfTest = new Dwarf();
	DwarfTest->setPhysicalDef(20);
	EXPECT_EQ(DwarfTest->getPhysicalDef();
}

TEST(DwarfTest, getMaxHealth_Test){
	Dwarf* DwarfTest = new Dwarf();
	DwarfTest->setMaxHealth(50);
	EXPECT_EQ(DwarfTest->getMaxHealth(),50);
}

TEST(DwarfTest, getAtk_Test){
	Dwarf* DwarfTest = new Dwarf();
	DwarfTest->setAttack(20);
	EXPECT_EQ(DwarfTest->getAtk(),20);
}

TEST(DwarfTest, getMagicalDef_Test){
        Dwarf* DwarfTest = new Dwarf():
	DwarfTest->setMagicalDef(20);
	EXPECT_EQ(DwarfTest->getMagicalDef(),20);
}

#endif
