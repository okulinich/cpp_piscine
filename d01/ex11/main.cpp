#include "Scat.hpp"
#include <cstring>

int main(int argc, char *argv[]) {
    Scat scat;

    if(argc == 1)
        scat.readFromStdin();
    else {
        //first things first: check all flags
        for(int i = 1; i < argc; i++) {
            if(argv[i][0] == '-' && strlen(argv[i]) > 1)
                scat.setFlag(argv[i]);
        }
        //read info from file or stdin
        //and print to stdout if arg is not flag
        for(int i = 1; i < argc; i++) {
            if(argv[i][0] != '-')
                scat.readFromFile(argv[i]);
            else if(strcmp(argv[i], "-") == 0)
                scat.readFromStdin();
        }
    }

    return 0;
}
