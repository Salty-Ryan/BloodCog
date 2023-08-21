#pragma once

#include "Sound.h"  // Assuming you have a Sound class for individual sound assets.
#include "Logger.h"  // For logging purposes.

class AudioEngine {
public:
    AudioEngine();  // Constructor.
    ~AudioEngine();  // Destructor.

    bool initialize();  // Initialize the audio engine.
    void playSound(const Sound& sound);  // Play a specific sound.
    void stopSound(const Sound& sound);  // Stop a specific sound.
    void cleanup();  // Clean up and release resources.

private:
    // TODO: Add private member variables for audio context, sound buffers, etc.

    // Example:
    // AudioContext* context;
    // std::vector<SoundBuffer*> soundBuffers;
};
