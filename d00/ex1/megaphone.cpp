#include <iostream>
#include <cstring>
#include <iomanip>

static void w_strtrim(char *str) {
    int i = 0;
    int j = strlen(str) - 1;
    int k = 0;

    while(isspace(str[i]))
        i++;
    while (isspace(str[j]))
        j--;
    while(k + i <= j) {
        str[k] = str[i + k];
        k++;
    }
    str[k] = '\0';
}

int main(int argc, char *argv[]) {
    if(argc == 1)
        std::cout << "\a";
    else {
        for(int i = 1; i < argc; i++) {
            w_strtrim(argv[i]); 
            for(int j = 0; (unsigned)j < std::strlen(argv[i]); j++)
                std::cout << (char)toupper(argv[i][j]);
            std::cout << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
