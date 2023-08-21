#pragma once

class Initialization {
public:
    Initialization();  // Constructor.
    ~Initialization();  // Destructor.

    bool initializeEngine();  // Initialize the game engine.
    void shutdownEngine();  // Shutdown the game engine and release resources.

private:
    // TODO: Add private member variables for initialization state, loaded assets, etc.
    // Example:
    // bool isInitialized;
    // AssetManager assetManager;
};
