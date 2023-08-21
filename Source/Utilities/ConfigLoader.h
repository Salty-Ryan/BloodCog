#pragma once
#include <string>
#include <map>

class ConfigLoader {
public:
    ConfigLoader();  // Constructor.
    ~ConfigLoader();  // Destructor.

    bool loadConfig(const std::string& filePath);  // Load configuration from a file.
    void saveConfig(const std::string& filePath);  // Save current configuration to a file.

private:
    std::map<std::string, std::string> configData;  // Store configuration data as key-value pairs.
};
