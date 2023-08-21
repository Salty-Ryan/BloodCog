#pragma once

class InputManager {
public:
    InputManager();  // Constructor.
    ~InputManager();  // Destructor.

    bool initialize();  // Initialize the Input manager.
    void handleInput();  // Handle user input.
    void cleanup();  // Clean up and release resources.

private:
    // TODO: Add private member variables for key states, mouse states, etc.
    // Example:
    // KeyState* currentKeyStates;
    // MouseState currentMouseState;
};
