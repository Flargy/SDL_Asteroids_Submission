#pragma once
#include <array>
#include "Global.h"

const std::array<Vector2, 6> smallAsteroid{
	Vector2{-7,4},
	Vector2{0,8},
	Vector2{7,4},
	Vector2{7,-3},
	Vector2{0,-6},
	Vector2{-6,-3}
};

const std::array<Vector2, 6> mediumAsteroid{
	Vector2{-7 * 2,4 * 2},
	Vector2{0 * 2,8 * 2},
	Vector2{7 * 2,4 * 2},
	Vector2{7 * 2,-3 * 2},
	Vector2{0 * 2,-6 * 2},
	Vector2{-6 * 2,-3 * 2}
};

const std::array<Vector2, 6> largeAsteroid{
	Vector2{-7 * 3,4 * 3},
	Vector2{0 * 3,8 * 3},
	Vector2{7 * 3,4 * 3},
	Vector2{7 * 3,-3 * 3},
	Vector2{0 * 3,-6 * 3},
	Vector2{-6 * 3,-3 * 3}
};

const std::array<Vector2, 3> player{
	Vector2{-10, -10},
	Vector2{0, 10},
	Vector2{10, -10}
};

const std::array<Vector2, 6> projectile{
	Vector2{-2, -2},
	Vector2{-2, 2},
	Vector2{2, 2},
	Vector2{2, -2},
	Vector2{-2,-2},
	Vector2{2,2}
};

const std::array<Vector2, 6> alien{
	Vector2{-15,0},
	Vector2{-7,8},
	Vector2{7,8},
	Vector2{15,0},
	Vector2{7,-8},
	Vector2{-7,-8}
};