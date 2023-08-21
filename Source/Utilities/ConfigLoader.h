#pragma once

class ConfigLoader {
public:
    ConfigLoader(const char* filePath);
    ~ConfigLoader();

    void loadConfig();
    // Getter methods for config values.

private:
    // Config values and file path.
};
