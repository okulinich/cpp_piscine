#include "ZombieEvent.hpp"

int main() {
    ZombieEvent zombie_ev;
    Zombie *zombie = nullptr;
    
    zombie = zombie_ev.newZombie("Vasya");
    zombie->announce();

    zombie_ev.randomChump();
    zombie_ev.randomChump();
    
    delete zombie;
    return 0;
}