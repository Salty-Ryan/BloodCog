#pragma once

class MainLoop {
public:
    MainLoop();  // Constructor.
    ~MainLoop();  // Destructor.

    void start();  // Start the main game loop.
    void stop();   // Stop the main game loop.

private:
    bool running = true;  // Flag to determine if the game loop is running.

    // Private member functions for different stages of the game loop.
    void handleInput();  // Handle user input.
    void update();       // Update game state.
    void render();       // Render the game.
};
