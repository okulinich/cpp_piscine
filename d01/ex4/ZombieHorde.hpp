#pragma once
#include "Zombie.hpp"

class ZombieHorde {
    private:
        int n;
        Zombie *horde;
    public:
        ZombieHorde();
        ZombieHorde(int n);
        ~ZombieHorde();
        void announce();
};

