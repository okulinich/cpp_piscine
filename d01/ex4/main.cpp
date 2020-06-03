#include "ZombieHorde.hpp"

int main() {
    ZombieHorde horde1;
    ZombieHorde horde2(6);

    horde1.announce();
    horde2.announce();

    return 0;
}
