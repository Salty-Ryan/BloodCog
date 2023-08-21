#pragma once

#include "Sound.h"
#include "Logger.h"
#include "AudioContext.h"
#include "SoundBuffer.h"

class AudioEngine {
public:
    AudioEngine();  // Constructor.
    ~AudioEngine();  // Destructor.

    bool initialize();  // Initialize the audio engine.
    void playSound(const Sound& sound);  // Play a specific sound.
    void stopSound(const Sound& sound);  // Stop a specific sound.
    void cleanup();  // Clean up and release resources.

    // Additional methods for sound buffer management.
    bool loadSoundBuffer(const std::string& filePath);  // Load a sound buffer from a file.

private:
    AudioContext* context;  // Audio context.
    std::vector<SoundBuffer*> soundBuffers;  // List of sound buffers.
};
