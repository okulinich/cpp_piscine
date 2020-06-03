#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include "v_vector.hpp"

int main(int argc, char *argv[]) {
    std::ifstream in;
    std::ofstream out;
    v_vector<std::string> file1;
    std::string buf;
    size_t pos = 0;

    if(argc == 4) {
        in.open(argv[1]);
        if(in.is_open()) {
            //reading whole the file
            while(getline(in, buf))
                file1.push_back(buf);
            in.close();
            //checkig all readed lines
            for(int i = 0; i < file1.size(); i++) {
                //searching for arg[2]
                pos = file1[i].find(argv[2]);
                //replacing every occurance to arg[3]
                while(pos != std::string::npos) {
                    file1[i].replace(pos, strlen(argv[2]), argv[3]);
                    pos = file1[i].find(argv[2]);
                }
            }
            //wrinting result to the new file
            out.open("res.txt");
            if(out.is_open()) {
                for(int i = 0; i < file1.size(); i++)
                    out << file1[i] << std::endl;
                out.close();
            }
            else
                std::cerr << "Error: cannot create file for res\n";
        }
        else
            std::cerr << "Error: cannot open a file\n";
    }
    else
        std::cerr << "Usage: filenam s1 s2\n";
    return 0;
}
