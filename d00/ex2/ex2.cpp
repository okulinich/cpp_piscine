#include "PhoneBook.hpp"

int main() {
    PhoneBook phb[8];
    std::string command;
    int index = 0;

    std::cout << "Welcome to your phone book!\n";
    while(true) {
        std::cout << "phonebook> ";
        getline(std::cin, command);
        if(command.compare("ADD") == 0) {
            if(index == 7)
                std::cout << "no space left in your phonebook\n";
            else
                phb[index++].addContactInfo();
        }
        else if(command.compare("SEARCH") == 0) {
            for(int i = 0; i < index; i++)
                phb[i].printContactInfo();
        }
        else if(command.compare("EXIT") == 0) {
            std::cout << "All your contacts would be lost, a you sure? (Y/N): ";
            std::cin >> command[0];
            if(command[0] == 'y' || command[0] == 'Y')
                return 0;
        }
        else
            std::cout << "Wrong command!\n";
    }
    return 0;
}
