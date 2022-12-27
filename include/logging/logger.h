#ifndef LOGGER_H
#define LOGGER_H
#include <iostream>

class Logger{
    std::string name;
public:
    Logger(std::string name);

    void info(std::string message);
    void warn(std::string message);
    void error(std::string message);
};


#endif