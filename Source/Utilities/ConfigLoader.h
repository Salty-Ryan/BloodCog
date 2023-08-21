#pragma once
#include <string>

class ConfigLoader {
public:
    ConfigLoader();  // Constructor.
    ~ConfigLoader();  // Destructor.

    bool loadConfig(const std::string& filePath);  // Load configuration from a file.
    void saveConfig(const std::string& filePath);  // Save current configuration to a file.

private:
    // TODO: Add private member variables for storing configuration data.
    // Example:
    // std::map<std::string, std::string> configData;
};
