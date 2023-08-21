#include "Logger.h"
#include <iostream>

void Logger::log(const std::string& message) {
    // TODO: Implement logging logic. For now, we'll just print to the console.
    std::cout << "[LOG] " << message << std::endl;
}

void Logger::error(const std::string& message) {
    // TODO: Implement error logging logic. For now, we'll just print to the console.
    std::cerr << "[ERROR] " << message << std::endl;
}
