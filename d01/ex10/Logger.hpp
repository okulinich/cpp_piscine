#pragma once
#include <iostream>

class Logger {
    private:
        std::string fileName;

        void logToConsole(std::string str);
        void logToFile(std::string str);
        std::string makeLogEntry(std::string message);
    public:
        Logger(std::string fileName);
        void log(std::string const & dest, std::string const & message);
};
