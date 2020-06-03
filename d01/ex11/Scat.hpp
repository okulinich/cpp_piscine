#pragma once
#include <iostream>

class Scat {

    struct s_flags {
        bool n_flag;    //prints numbers at the start of every string
        bool b_flag;    //prints numbers only if string is not empty
        bool e_flag;    //prints $ at the end of every string
        bool s_flag;    //deletes empty strings if they repeat
    };

    private:
        struct s_flags flags;
 
    public:
        Scat();
        void readFromStdin();
        void readFromFile(std::string file_name);
        void setFlag(std::string flag);
        void printOutput(std::string);
};
