#include "ZombieHorde.hpp"
#include <cstdlib>

ZombieHorde::ZombieHorde() {
    n = 0;
    horde = nullptr;
}

ZombieHorde::~ZombieHorde() {
    if(n > 0)
        delete[] horde;
}

ZombieHorde::ZombieHorde(int n) {
    if(n > 0) {
        int name_length = 0;
        std::string random_name;

        this->n = n;
        horde = new Zombie[n];

        for(int i = 0; i < n; i++) {
            name_length = rand() % 16 + 4;
            for(int j = 0; j < name_length; j++)
                random_name.push_back(rand() % 57 + 65);
            horde[i].setName(random_name);
            name_length = rand() % 3;
            horde[i].setType(static_cast<ZombieType>(name_length));
            random_name.clear();
        }
    }
    else
        ZombieHorde();
}

void ZombieHorde::announce() {
    if(n > 0) {
        for(int i = 0; i < n; i++) {
            horde[i].announce();
            std::cout << "\n";
        }
    }
    else
        std::cout << "There are no zombies in this horde\n";
}
