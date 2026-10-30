#pragma once
#include "Ennemies.h"
class HeadlessZombie : Ennemies
{
public:
    HeadlessZombie(int base_life, int base_power) : Ennemies(base_life, base_power){
        this->life = 80;
        this->power = 15;
    }
};

