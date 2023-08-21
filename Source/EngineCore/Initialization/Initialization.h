#include "Initialization.h"
#include "Logger.h"  // Assuming you have a Logger for logging purposes.

Initialization::Initialization() {
    Logger::log("Initialization constructor called.");
}

Initialization::~Initialization() {
    Logger::log("Initialization destructor called.");
    cleanup();  // Ensure cleanup is called when the object is destroyed.
}

bool Initialization::setup() {
    Logger::log("Setting up game engine components...");

    // Initialize game engine components.
    // For example, set up rendering context, initialize libraries, etc.
    
    // TODO: Add specific initialization code here.

    // If all initializations are successful:
    Logger::log("Game engine components successfully initialized.");
    return true;

    // If any initialization fails:
    // Logger::log("Failed to initialize [specific component].");
    // return false;
}

void Initialization::cleanup() {
    Logger::log("Cleaning up game engine components...");

    // Clean up resources, deinitialize libraries, etc.
    
    // TODO: Add specific cleanup code here.

    Logger::log("Game engine components successfully cleaned up.");
}
