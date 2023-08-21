#pragma once

#include <string>

class FileSystemDataManagement {
public:
    FileSystemDataManagement();  // Constructor.
    ~FileSystemDataManagement();  // Destructor.

    bool saveGameData(const std::string& filePath, const std::string& data);  // Save game data to a file.
    std::string loadGameData(const std::string& filePath);  // Load game data from a file.

    // Additional methods for handling other file operations can be added here.
};
