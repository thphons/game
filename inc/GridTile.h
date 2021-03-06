#pragma once
#include <SFML\Graphics.hpp>

#include "Globals.h"
#include "GridTileController.h"
#include "GridTileShape.h"



class GridTile
{
private:
	GridTileShape* gtShape;
	Globals::PolygonType polygonType;
	void generateShape();

public:
	GridTile(Globals::PolygonType polygonType);
	~GridTile(void);

	bool hasPoint(float x, float y);
	sf::Shape* getShape();
};

