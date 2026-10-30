#pragma once
#include "Entities.h"

class Ennemies : Entities
{
protected:
	int life;
	int power;
public:
	Ennemies(int base_life, int base_power) : life(base_life), power(base_power) {}
};