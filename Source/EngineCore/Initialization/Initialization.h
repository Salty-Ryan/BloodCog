#pragma once

#include "Logger.h"
#include "AudioEngine/AudioEngine.h"
// Include other core engine components as needed.

class Initialization {
public:
    Initialization();  // Constructor.
    ~Initialization();  // Destructor.

    bool initializeEngine();  // Initialize the game engine.
    void shutdownEngine();  // Shutdown the game engine and release resources.

private:
    // Member variables for initialization state, loaded assets, etc.
    bool isInitialized;
    AudioEngine audioEngine;
    // Other core engine components, like RenderingEngine, PhysicsEngine, etc.
};
