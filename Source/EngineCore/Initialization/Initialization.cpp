#include "Initialization.h"
#include "AssetManager.h"       // Assuming you have this class
#include "RenderingEngine.h"    // Assuming you have this class
#include "PhysicsEngine.h"      // Assuming you have this class

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

    // Load assets.
    AssetManager::getInstance().loadAllAssets();  // Assuming you have a singleton pattern for AssetManager

    // Initialize the audio engine.
    if (!audioEngine.initialize()) {
        Logger::log("Failed to initialize audio engine.");
        return false;
    }

    // Initialize the rendering engine.
    if (!RenderingEngine::getInstance().initialize()) {
        Logger::log("Failed to initialize rendering engine.");
        return false;
    }

    // Initialize the physics engine.
    if (!PhysicsEngine::getInstance().initialize()) {
        Logger::log("Failed to initialize physics engine.");
        return false;
    }

    // Set initial game state.
    // TODO: Set player's initial position, set up game world, etc.

    isInitialized = true;
    return true;
}

void Initialization::shutdownEngine() {
    Logger::log("Shutting down engine.");

    // Shutdown the audio engine.
    audioEngine.cleanup();

    // Shutdown the rendering engine.
    RenderingEngine::getInstance().shutdown();

    // Shutdown the physics engine.
    PhysicsEngine::getInstance().shutdown();

    isInitialized = false;
}

