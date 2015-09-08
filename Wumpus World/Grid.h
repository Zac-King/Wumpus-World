#pragma once
#include <iostream>

struct pos 
{
	int x;
	int y;
};

struct cell
{
	std::string content;
		// Gold
		// Wumpus
		// Pit
		// Nothing
	std::string perception;
		// Feel a breeze	- Pit is Near
		// Smell a Stence	- Wumpus is Near
		// See a Glitter	- Gold is Near
		// All Clear		- Nothing is Near
	pos posistion;
	
	// Contents
	bool hasGold	= false;
	bool hasPit		= false;
	bool hasWumpus	= false;
	bool hasPlayer	= false;
	// Whats nearby
	bool nearGold	= false;
	bool nearPit	= false;
	bool nearWumpus	= false;

};

class Grid
{
private:
	int height;
	int width;

	cell myCells[16];

	void MakeGrid();

public:
	Grid(int rows, int cols);

	void DrawGrid();
	
};