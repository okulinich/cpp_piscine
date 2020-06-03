#include <iostream>
#include <string>
#include <fstream>
#include <cstring>

int main(int argc, char *argv[]) {
    std::string file_res;
    std::string str_input;
    size_t pos = 0;
    std::ofstream out;
    std::ifstream in;

    if(argc == 4) {
        in.open(argv[1]);
        if(in.is_open()) {
            file_res = argv[1];
            file_res += ".replace";
            out.open(file_res);
            if(out.is_open()) {
                while(getline(in, str_input)) {
                    //read line from the source file
                    pos = str_input.find(argv[2]);
                    while(pos != std::string::npos) {
                        //replace occurances in string 
                        str_input.replace(pos, strlen(argv[2]), argv[3]);
                        pos = str_input.find(argv[2]);
                    }
                    //write to the destination file
                    out << str_input << std::endl;
                }
            }
            else
                std::cerr << "cannot open res file\n";
        }
        else
            std::cerr << "cannot open data file\n"; 
    }
    else
        std::cerr << "Usage: ./a.out filename s1 s2";
    return 0;
}
