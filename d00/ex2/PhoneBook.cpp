#include "PhoneBook.hpp"
#include <regex>

bool PhoneBook::setUnderwearColor(std::string input) {
    if(input.compare("red") == 0)
        underwear_color = COLORS_RED;
    else if(input.compare("blue") == 0)
        underwear_color = COLORS_BLUE;
    else if(input.compare("greed") == 0)
        underwear_color = COLORS_GREEN;
    else
        return false;
    return true;
}

std::string PhoneBook::getUnderwearColor() {
    if(underwear_color == COLORS_RED)
        return "red";
    else if(underwear_color == COLORS_GREEN)
        return "green";
    else if(underwear_color == COLORS_BLUE)
        return "blue";
    else
        return "no color specified";
}

static void print_in_table(std::string str, bool add_closing) {
    std::cout << std::setw(2) << "| " << std::setw(9) << str.substr(0, 9);
    if(str.length() == 10) 
        std::cout << str[9];
    else if(str.length() > 10)
        std::cout << ".";
    std::cout << std::setw(1) << " ";
    if(add_closing)
        std::cout << "|\n";
}

void PhoneBook::addContactInfo() {
    std::string buf;

    std::cout << "Enter contact name: ";
    getline(std::cin, name);
    std::cout << "Enter contact last name: ";
    getline(std::cin, last_name);
    std::cout << "Enter contact nick-name: ";
    getline(std::cin, nick_name);
    std::cout << "Enter contact postal code: ";
    getline(std::cin, postal_code);
    std::cout << "Enter contact favourite meal: ";
    getline(std::cin, favorite_meal);
    std::cout << "Enter contact darkest secret: ";
    getline(std::cin, darkest_secret);
    std::cout << "Enter contact underwear color: ";
    getline(std::cin, buf);
    while (!setUnderwearColor(buf)) {
        std::cout << "I don't know such color...\n";
        std::cout << "Enter contact underwear color: ";
        getline(std::cin, buf);
    }
    std::cout << "Enter contact email: ";
    getline(std::cin, buf);
    while(!setEmailAddr(buf)) {
        std::cout << "Wrong email!\n";
        std::cout << "Enter contact email: ";
        getline(std::cin, buf);
    }
    std::cout << "Enter contact phone number: ";
    getline(std::cin, buf);
    while(!setPhoneNumber(buf)) {
        std::cout << "Wrong number!\n";
        std::cout << "Enter contact phone number: ";
        getline(std::cin, buf);
    }
    std::cout << "Enter contact login: ";
    getline(std::cin, buf);
    while(!setLogin(buf)) {
        std::cout << "Wrong login!\n";
        std::cout << "Enter contact login: ";
        getline(std::cin, buf);
    }
    std::cout << "Enter contact birthday date: ";
    getline(std::cin, buf);
    while(!setBirthdayDate(buf)) {
        std::cout << "Wrong date!\n";
        std::cout << "Enter contact birthday date: ";
        getline(std::cin, buf);
    }
}

void PhoneBook::printContactInfo() {
    std::cout.setf(std::ios_base::left);
    print_in_table("name", false);
    print_in_table("last name", false);
    print_in_table("underwear", true);
    print_in_table(name, false);
    print_in_table(last_name, false);
    print_in_table(getUnderwearColor(), true);
}

bool PhoneBook::setLogin(std::string input) {
    if(std::regex_match(input, std::regex("^[A-Za-z]\\w+$"))) {
        login = input;
        return true;
    }
    return false;
}

bool PhoneBook::setEmailAddr(std::string input) {
    if(std::regex_match(input, std::regex("^\\w+@\\w+\\.(com|ua|net)$"))) {
        email_address = input;
        return true;
    }
    return false;
}

bool PhoneBook::setPhoneNumber(std::string input) {
    if(std::regex_match(input, std::regex("^\\+\\d{11,15}$"))) {
        phone_number = input;
        return true;
    }
    return false;
}

bool PhoneBook::setBirthdayDate(std::string input) {
    if(std::regex_match(input, std::regex("^\\d\\d\\.\\d\\d\\.[1-2]\\d\\d\\d\\.?$"))) {
        birthday_date = input;
        return true;
    }
    return false;
}
