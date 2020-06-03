#include "Logger.hpp"
#include <fstream>
#include <ctime>

void Logger::logToConsole(std::string str) {
    std::cout << "log: " << str << std::endl;
}

void Logger::logToFile(std::string str) {
    std::ofstream out;

    out.open(fileName, std::ios_base::app);
    if(out.is_open()) {
        out << "log: " << str << std::endl;
        out.close();
    }
    else
        std::cerr << "Cannot open destination file\n";
}

std::string Logger::makeLogEntry(std::string message) {
    time_t cur_time = time(NULL);
    std::string log_time = ctime(&cur_time);

    log_time[log_time.length() - 1] = ' ';
    log_time += message;
    return log_time;
}

Logger::Logger(std::string fileName) {
    this->fileName = fileName;
}

void Logger::log(std::string const & dest, std::string const & message) {
    typedef void (Logger::*MembersArray) (std::string str);
    MembersArray membarr[2];
    std::string log_str = makeLogEntry(message);
    

    membarr[0] = &Logger::logToConsole;
    membarr[1] = &Logger::logToFile;

    if(dest.compare("console") == 0)
        (this->*membarr[0])(log_str);
    else if(dest.compare("file") == 0)
        (this->*membarr[1])(log_str);
    else
        std::cerr << "Error: unknown log destionation\n";
}
