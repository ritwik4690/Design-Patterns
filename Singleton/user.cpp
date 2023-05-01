#include <iostream>
#include "logger.hpp"
#include <thread>
using namespace std;

void user1Logs() {
    Logger* logger1 = Logger::getInstance();
    logger1->Log("This message is from logger 1");
}

void user2Logs() {
    Logger* logger2 = Logger::getInstance();
    logger2->Log("This message is from logger 2");
}

int main() {
    
    thread t1(user1Logs);
    thread t2(user2Logs);

    t1.join();
    t1.join();
    return 0;
}