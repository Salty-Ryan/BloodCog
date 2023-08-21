#pragma once

class Logger {
public:
    static void logMessage(const char* message);
    static void logWarning(const char* warning);
    static void logError(const char* error);

private:
    // File or stream to write logs to.
};
