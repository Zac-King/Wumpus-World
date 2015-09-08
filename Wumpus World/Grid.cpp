#include "Grid.h"

Grid::Grid(int h, int w)
{
	height = h;
	width = w;
}

void Grid::MakeGrid()
{
	int a = 0;
	// Assign Posisition
	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			myCells[a].posistion = {i, j};
			myCells[a].content = "nothing";
			a++;
		}
	}
	myCells[0].hasPlayer	= true;
	myCells[2].hasPit		= true;
	myCells[5].hasPit		= true;
	myCells[11].hasGold		= true;
	myCells[14].hasWumpus	= true;

	myCells[1].nearPit = true;
	myCells[3].nearPit = true;
	myCells[4].nearPit = true;
	myCells[6].nearPit = true;
	myCells[9].nearPit = true;

	myCells[10].nearWumpus = true;
	myCells[13].nearWumpus = true;
	myCells[15].nearWumpus = true;

	myCells[7].nearGold  = true;
	myCells[10].nearGold = true;
	myCells[15].nearGold = true;
}

void Grid::DrawGrid()
{
	
}

