#include <iostream>

static void memory_leak() {
    std::string *panthere = new std::string("panthere here");
    std::cout << *panthere << std::endl;
    delete panthere;
}

int main() {
    memory_leak();
    return 0;
}
