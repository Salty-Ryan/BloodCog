#include "AudioEngine.h"

AudioEngine::AudioEngine() : context(nullptr) {
    Logger::log("AudioEngine constructor called.");
}

AudioEngine::~AudioEngine() {
    cleanup();
    Logger::log("AudioEngine destructor called.");
}

bool AudioEngine::initialize() {
    Logger::log("Initializing audio engine...");

    context = new AudioContext();
    if (!context->initialize()) {
        Logger::log("Failed to initialize audio context.");
        return false;
    }

    // TODO: Initialize other audio engine components, like sound buffers.

    Logger::log("Audio engine successfully initialized.");
    return true;
}

void AudioEngine::playSound(const Sound& sound) {
    // TODO: Play the provided sound using the sound buffers and audio context.
    // For now, we'll just log the sound being played.
    Logger::log("Playing sound: " + sound.getName());
}

void AudioEngine::stopSound(const Sound& sound) {
    // TODO: Stop the provided sound using the sound buffers and audio context.
    Logger::log("Stopping sound: " + sound.getName());
}

bool AudioEngine::loadSoundBuffer(const std::string& filePath) {
    // Create a new SoundBuffer and load the sound data from the file.
    SoundBuffer* buffer = new SoundBuffer();
    if (!buffer->loadFromFile(filePath)) {
        delete buffer;
        Logger::log("Failed to load sound buffer from: " + filePath);
        return false;
    }

    // Add the buffer to the list of sound buffers.
    soundBuffers.push_back(buffer);
    Logger::log("Loaded sound buffer from: " + filePath);
    return true;
}

void AudioEngine::cleanup() {
    Logger::log("Cleaning up audio engine components...");

    if (context) {
        context->cleanup();
        delete context;
        context = nullptr;
    }

    // Cleanup sound buffers.
    for (SoundBuffer* buffer : soundBuffers) {
        buffer->release();
        delete buffer;
    }
    soundBuffers.clear();

    Logger::log("Audio engine components successfully cleaned up.");
}
