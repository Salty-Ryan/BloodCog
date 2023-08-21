#pragma once

#include "Sound.h"
#include "Logger.h"
#include "AudioContext.h"
#include "SoundBuffer.h"  // Include the SoundBuffer header.

class AudioEngine {
public:
    AudioEngine();  // Constructor.
    ~AudioEngine();  // Destructor.

    bool initialize();  // Initialize the audio engine.
    void playSound(const Sound& sound);  // Play a specific sound.
    void stopSound(const Sound& sound);  // Stop a specific sound.
    void cleanup();  // Clean up and release resources.

private:
    AudioContext* context;  // Audio context.
    std::vector<SoundBuffer*> soundBuffers;  // List of sound buffers.
};
