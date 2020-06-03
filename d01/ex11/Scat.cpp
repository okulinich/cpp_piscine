#include "Scat.hpp"
#include <fstream>

void Scat::readFromStdin() {
    std::string buffer;

    while(getline(std::cin, buffer)) {
        printOutput(buffer);
    }
}

void Scat::readFromFile(std::string file_name) {
    std::ifstream in;
    std::string buffer;

    in.open(file_name);
    if(in.is_open()) {
        while (!in.eof()) {
            getline(in, buffer);
            printOutput(buffer);
        }
        in.close();
    }
    else
        std::cerr << "Error: cannot open source file!\n";
}

void Scat::setFlag(std::string flag) {
    if(flag.compare("--help") == 0) {
        std::cout << "Usage: ./scat [-nbes] [file_name1, ...]\n";
        exit(EXIT_SUCCESS);
    }
    else if(flag.compare("-n") == 0)
        flags.n_flag = true;
    else if(flag.compare("-b") == 0)
        flags.b_flag = true;
    else if(flag.compare("-e") == 0)
        flags.e_flag = true;
    else if(flag.compare("-n") == 0)
        flags.s_flag = true;
    else {
        std::cerr << "Invalid option \'" << flag << "\'\n";
        std::cerr << "Try 'cat --help' for more information.";
        exit(EXIT_FAILURE);
    }
}

Scat::Scat() {
    flags.n_flag = false;
    flags.b_flag = false;
    flags.e_flag = false;
    flags.s_flag = false;
}

void Scat::printOutput(std::string buffer) {
    std::cout << buffer << std::endl;
}
