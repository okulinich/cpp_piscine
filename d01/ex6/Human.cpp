#include "Human.hpp"

Human::Human() {
    brain.setIq(12);
    brain.setWeight(3.47);
}

std::string Human::identify() {
    return brain.identify();
}

Brain& Human::getBrain() {
    return brain;
}
