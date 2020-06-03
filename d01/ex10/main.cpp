#include "Logger.hpp"

int main() {
    Logger logger("file.txt");

    logger.log("console", "root opens terminal");
    logger.log("file", "root opens file");

    return 0;
}
