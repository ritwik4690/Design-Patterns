#ifndef logger_hpp
#define logger_hpp

#include <string>
#include <mutex>
using namespace std;

class Logger {
    static int ctr;
    static mutex mtx;
    static Logger* loggerInstance;
    Logger();
    Logger(const Logger &);
    Logger& operator=(const Logger &);
public:
    static Logger* getInstance();
    void Log(string message);
};

#endif