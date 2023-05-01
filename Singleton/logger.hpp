#ifndef logger_hpp
#define logger_hpp

#include <string>
using namespace std;

class Logger {
    static int ctr;
    static Logger* loggerInstance;
    Logger();
public:
    static Logger* getInstance();
    void Log(string message);
};

#endif