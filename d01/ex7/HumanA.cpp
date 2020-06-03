#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& w) : weapon(w) {
    this->name = name;
}

void HumanA::attack() {
    std::cout << "HumanA " << name;
    std::cout << " attacks with weapon " << weapon.getType() << "\n";
}
