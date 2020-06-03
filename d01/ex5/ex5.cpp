#include <iostream>

int main() {
    std::string  str("HI THIS IS BRAIN");
    std::string* str1 = &str;
    std::string& str2 = str;

    std::cout << "str from string: " << str << std::endl;
    std::cout << "str from pointer: " << *str1 << std::endl;
    std::cout << "str from reference: " << str2 << std::endl;

    std::string test("lalala");
    str2 = test;
    std::cout << str2;
    return 0;
}
