#include "ZombieEvent.hpp"
#include <cstdlib>

void ZombieEvent::setZombieType(ZombieType t) {
    type = t;
}

Zombie* ZombieEvent::newZombie(std::string name) {
    Zombie *zombie = new Zombie;

    zombie->setName(name);
    zombie->setType(this->type);
    return zombie;
}

void ZombieEvent::randomChump() {
    Zombie zombie;
    int name_length = rand() % 16 + 4;
    std::string random_name;

    for(int i = 0; i < name_length; i++)
        random_name.push_back(rand() % 57 + 65);
    zombie.setName(random_name);
    zombie.setType(ZOMBIE_ALMOST_ALIVE);
    zombie.announce();
}

ZombieEvent::ZombieEvent() {
    type = ZOMBIE_DEAD;
}
