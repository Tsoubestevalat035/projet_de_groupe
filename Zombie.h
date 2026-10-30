#pragma once
#include "Ennemies.h"

class Zombie : public Ennemies
{
public:
    Zombie() : Ennemies(100, 20) {
        this->life = 100;
        this->power = 20;
    }

    Zombie(int base_life, int base_power) : Ennemies(base_life, base_power) {
        this->life = base_life;
        this->power = base_power;
    }
};
