#pragma once

#include <string>

class SoundBuffer {
public:
    SoundBuffer();
    ~SoundBuffer();

    bool loadFromFile(const std::string& filePath);  // Load audio data from a file.
    void play();  // Play the sound buffer.
    void stop();  // Stop the sound buffer.
    void release();  // Release the buffer.

private:
    // TODO: Add private member variables to hold audio data, buffer ID, etc.
    // For example, if using OpenAL, you might have:
    // unsigned int bufferID;
};
