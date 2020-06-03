#pragma once
#include "Zombie.hpp"

class ZombieEvent {
    private:
        ZombieType type;
    public:
        ZombieEvent();
        void setZombieType(ZombieType t);
        Zombie* newZombie(std::string name);
        void randomChump();
};
