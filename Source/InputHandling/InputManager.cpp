#include "InputManager.h"
#include "Logger.h"

InputManager::InputManager() {
    Logger::log("InputManager constructor called.");
}

InputManager::~InputManager() {
    cleanup();
    Logger::log("InputManager destructor called.");
}

bool InputManager::initialize() {
    Logger::log("Initializing Input manager...");

    // TODO: Initialization logic. This might involve setting up key and mouse event listeners, initializing key and mouse state arrays, etc.

    Logger::log("Input manager initialized.");
    return true;
}

void InputManager::handleInput() {
    // TODO: Input handling logic. This will involve checking for key presses, mouse movements, etc., and updating the key and mouse state arrays accordingly.

    Logger::log("Handling input.");
}

void InputManager::cleanup() {
    Logger::log("Cleaning up Input manager...");

    // TODO: Cleanup logic. This might involve releasing any resources associated with key and mouse event listeners, deallocating key and mouse state arrays, etc.

    Logger::log("Input manager cleaned up.");
}
