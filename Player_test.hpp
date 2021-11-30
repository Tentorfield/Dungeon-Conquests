#ifndef __PLAYER__TEST__HPP__
#define __PLAYER__TEST__HPP__
#include "gtest/gtest.h"
#include "Player.cpp"

TEST(PlayerTest, getExp_Test){
	Player* PlayerTest = new Player();
	PlayerTest->setExp(10);
	EXPECT_EQ(PlayerTest->getExp(),10);
}

TEST(PlayerTest, getLevel_Test){
	Player* PlayerTest = new Player();
	PlayerTest->setLevel(5);
	EXPECT_EQ(PlayerTest->getLevel(),5);
}

TEST(PlayerTest, getMaxHealth_Test){
	Player* PlayerTest = new Player();
	EXPECT_EQ(PlayerTest->getMaxHealth(),150);
}

TEST(PlayerTest, getName_Test){
	Player* PlayerTest = new Player();
	PlayerTest->setName(lucky);
	EXPECT_EQ(PlayerTest->getName(),lucky);
}

TEST(PlayerTest, getCurrentHealth_Test){
	Player* PlayerTest = new Player();
	PlayerTest->setCurrentHealth(78);
	p_iUXcEjkMF880ff2eQVSUhS4LYG0kbh2dQEHq
	EXPECT_EQ(PlayerTest->getCurrentHealth(),78);
}

#endif