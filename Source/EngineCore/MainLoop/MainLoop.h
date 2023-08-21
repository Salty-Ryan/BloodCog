#pragma once

class MainLoop {
public:
    MainLoop();
    ~MainLoop();

    void run();  // The main game loop.
    void handleEvents();  // Handle user input or other events.
    void update();  // Update game state.
    void render();  // Render the game.
};
