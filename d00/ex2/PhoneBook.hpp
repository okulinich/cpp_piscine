#pragma once
#include <string>
#include <iostream>
#include <iomanip>

/*first name, last name, nickname,
login, postal address, email address, phone number, birthday date, favorite
meal, underwear color and darkest secret*/

enum Colors {
    COLORS_RED,
    COLORS_BLUE,
    COLORS_GREEN
};

class PhoneBook {
    private:
        std::string name;
        std::string last_name;
        std::string nick_name;
        std::string login;              //sould be a simple wide-used regex
        std::string postal_code;
        std::string email_address;      //should be a regex
        std::string phone_number;       //also regex
        std::string birthday_date;      //regex for date?
        std::string favorite_meal;
        Colors underwear_color;
        std::string darkest_secret;
    public:
        void addContactInfo();
        void printContactInfo();
        bool setLogin(std::string input);
        bool setEmailAddr(std::string input);
        bool setPhoneNumber(std::string input);
        bool setBirthdayDate(std::string input);
        bool setUnderwearColor(std::string input);
        std::string getUnderwearColor();
};
