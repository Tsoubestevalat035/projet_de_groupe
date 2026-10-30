#pragma once
#include "Ennemies.h"

class HeadlessZombie : public Ennemies
{
public:
    HeadlessZombie() : Ennemies(100, 20) {
        this->life = 80;
        this->power = 15;
    }

    HeadlessZombie(int base_life, int base_power) : Ennemies(base_life, base_power) {
        this->life = base_life;
        this->power = base_power;
    }
};


