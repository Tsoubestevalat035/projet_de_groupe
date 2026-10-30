#pragma once
#include "Ennemies.h"
class Zombie : public Ennemies
{
public:
    Zombie(int base_life, int base_power) : Ennemies(base_life, base_power) {
        this->life = 100;
        this->power = 20;
    }
};

