#include "FileSystemDataManagement.h"
#include "Logger.h"
#include <fstream>

FileSystemDataManagement::FileSystemDataManagement() {
    Logger::log("FileSystemDataManagement constructor called.");
}

FileSystemDataManagement::~FileSystemDataManagement() {
    Logger::log("FileSystemDataManagement destructor called.");
}

bool FileSystemDataManagement::saveGameData(const std::string& filePath, const std::string& data) {
    std::ofstream outFile(filePath);
    if (!outFile.is_open()) {
        Logger::log("Failed to open file for writing: " + filePath);
        return false;
    }

    outFile << data;
    outFile.close();
    Logger::log("Game data saved to: " + filePath);
    return true;
}

std::string FileSystemDataManagement::loadGameData(const std::string& filePath) {
    std::ifstream inFile(filePath);
    if (!inFile.is_open()) {
        Logger::log("Failed to open file for reading: " + filePath);
        return "";
    }

    std::string data((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
    inFile.close();
    Logger::log("Game data loaded from: " + filePath);
    return data;
}
