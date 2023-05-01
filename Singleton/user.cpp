#include <iostream>
#include "logger.hpp"
using namespace std;

int main() {
    Logger* logger1 = Logger::getInstance();
    logger1->Log("This message is from logger 1");

    Logger* logger2 = Logger::getInstance();
    logger2->Log("This message is from logger 2");
    return 0;
}