#pragma once
#include "Entities.h"

class Ennemies : Entities
{
public:
	int life;
	int power;

	Ennemies(int base_life, int base_power) : life(base_life), power(base_power) {}
};