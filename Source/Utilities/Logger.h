#pragma once
#include <string>

class Logger {
public:
    static void log(const std::string& message);  // Log a general message.
    static void error(const std::string& message);  // Log an error message.

    // Note: The Logger class is designed as a static utility class, so we don't need a constructor or destructor.
};
