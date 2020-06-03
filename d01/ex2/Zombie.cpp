#include "Zombie.hpp"

void Zombie::setName(std::string n) {
    name = n;
}

void Zombie::setType(ZombieType t) {
    type = t;
}

std::string Zombie::getName() {
    return name;
}

ZombieType Zombie::getType() {
    return type;
}

void Zombie::announce() {
    std::cout << "<" << name << "(";
    if(type == ZOMBIE_DEAD)
        std::cout << "dead";
    else if(type == ZOMBIE_HALF_DEAD)
        std::cout << "half dead";
    else if(type == ZOMBIE_ALMOST_ALIVE)
        std::cout << "almost alive";
    std::cout << ")> Braaaaaaaiiiinnnnnnnsssssssss.....\n";
}

Zombie::Zombie() {
    type = ZOMBIE_DEAD;
}
