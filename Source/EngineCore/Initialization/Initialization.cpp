#include "Initialization.h"

Initialization::Initialization() : isInitialized(false) {
    Logger::log("Initialization constructor called.");
}

Initialization::~Initialization() {
    if (isInitialized) {
        shutdownEngine();
    }
    Logger::log("Initialization destructor called.");
}

bool Initialization::initializeEngine() {
    Logger::log("Initializing engine.");

    // Initialize the audio engine.
    if (!audioEngine.initialize()) {
        Logger::log("Failed to initialize audio engine.");
        return false;
    }

    // TODO: Initialize other core engine components, like RenderingEngine, PhysicsEngine, etc.

    isInitialized = true;
    return true;
}

void Initialization::shutdownEngine() {
    Logger::log("Shutting down engine.");

    // Shutdown the audio engine.
    audioEngine.cleanup();

    // TODO: Shutdown other core engine components.

    isInitialized = false;
}
