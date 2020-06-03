#pragma once
#include <iostream>

class Brain {
    private:
        double weight;
        unsigned iq;
    public:
        void setWeight(double weight);
        void setIq(unsigned iq);
        int getIq();
        double getWeight();
        std::string identify();
};
