#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon& w) : weapon(w) {
    this->name = name;
}

void HumanB::attack() {
    std::cout << "HumanB " << name;
    std::cout << " attacks with weapon " << weapon.getType() << "\n";
}
