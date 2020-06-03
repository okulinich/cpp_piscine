#include "Pony.hpp"

void Pony::setName(std::string n) {
    name = n;
}

void Pony::setAge(int a) {
    age = a;
}

void Pony::setStatus(int st) {
    cur_status = static_cast<Pony_status>(st);
}

std::string Pony::getName() {
    return name;
}

int Pony::getAge() {
    return age;
}

int Pony::getStatus() {
    return static_cast<int>(cur_status);
}
