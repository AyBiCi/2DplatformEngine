#include "logging/logger.h"

Logger::Logger(std::string name){
    this->name = name;
}

void Logger::info(std::string message){
    std::cout << "INFO [" <<name<< "] " << message <<std::endl;
}

void Logger::warn(std::string message){
    std::cout << "WARN [" <<name<< "] " << message <<std::endl;
}

void Logger::error(std::string message){
    std::cout << "ERROR [" <<name<< "] " << message <<std::endl;
}