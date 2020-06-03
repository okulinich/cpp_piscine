#pragma once
#include <iostream>

enum ZombieType {
    ZOMBIE_DEAD,
    ZOMBIE_HALF_DEAD,
    ZOMBIE_ALMOST_ALIVE
};

class Zombie {
    private:
        std::string name;
        ZombieType type;
    public:
        Zombie();
        void setName(std::string n);
        void setType(ZombieType t);
        std::string getName();
        ZombieType getType();
        void announce();
};
