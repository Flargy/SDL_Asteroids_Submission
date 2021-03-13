#pragma once
#include <map>
#include <utility>
#include "Projectile.h"
#include "Asteroid.h"
#include "GameObjectBuffer.h"
#include "Alien.h"

class CollisionHandler
{
public:
	CollisionHandler();

	void FindAllCollisions(
		GameObjectBuffer<Asteroid, 32>& asteroids,
		GameObjectBuffer<Projectile, 16>& bullets,
		Player& player, Alien& alien,
		int gridSize);

private:
	using grid_cell = std::pair<int, int>;
	using grid_map = std::map<grid_cell, std::vector<CollidableObject*>>;

	grid_map map;

	bool CheckCollision(CollidableObject* obj, CollidableObject* otherObj);
	
	//Loops through each grid cell that `object` occupies
	template<typename T>
	void for_each_occupied_grid_cell(CollidableObject& object, int& gridSize, T func)
	{
		grid_cell currentCell;

		auto&& position = object.transform.GetPosition();
		int x = position.x;
		int y = position.y;
		
		for (currentCell.first = std::floor((object.boundingBox.xMin + x) / gridSize)
			; currentCell.first <= std::ceil((object.boundingBox.xMax + x) / gridSize)
			; ++currentCell.first )
		{
			for (currentCell.second = std::floor((object.boundingBox.yMin + y) / gridSize)
				; currentCell.second <= std::ceil((object.boundingBox.yMax + y) / gridSize)
				; ++currentCell.second)
			{
				func(object, currentCell);
			}
		}
	}


};