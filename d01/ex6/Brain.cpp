#include "Brain.hpp"
#include <sstream>

void Brain::setWeight(double weight) {
    this->weight = weight;
}

void Brain::setIq(unsigned iq) {
    this->iq = iq;
}

int Brain::getIq() {
    return iq;
}

double Brain::getWeight() {
    return weight;
}

std::string Brain::identify() {
    std::stringstream str;
    str << std::hex << this;

    return str.str();
}
