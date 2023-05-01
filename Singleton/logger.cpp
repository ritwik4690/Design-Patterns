#include <iostream>
#include "logger.hpp"
using namespace std;
int Logger::ctr = 0;
Logger* Logger::loggerInstance = nullptr;

Logger::Logger() {
    ctr++;
    cout << "New instance created. No. of instances: " << ctr << endl;
}

void Logger::Log(string message) {
    cout << message << endl;
}

Logger* Logger::getInstance() {
    if (loggerInstance == nullptr) {
        loggerInstance = new Logger();
    }
    return loggerInstance;
}