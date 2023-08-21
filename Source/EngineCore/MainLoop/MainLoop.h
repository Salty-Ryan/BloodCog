#pragma once

class MainLoop {
public:
    MainLoop();  // Constructor.
    ~MainLoop();  // Destructor.

    void start();  // Start the main game loop.
    void stop();   // Stop the main game loop.

private:
    bool running = true;  // Flag to determine if the game loop is running.

    // TODO: Add other private member variables or methods as needed.
    // Example:
    // void handleInput();
    // void update();
    // void render();
};
