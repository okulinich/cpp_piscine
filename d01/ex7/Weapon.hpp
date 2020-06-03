#pragma once
#include <iostream>

class Weapon {
    private:
        std::string type;
    public:
        Weapon();
        Weapon(std::string t);
        void setType(std::string);
        const std::string getType();
};
