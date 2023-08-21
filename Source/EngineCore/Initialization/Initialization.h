#pragma once

class Initialization {
public:
    Initialization();
    ~Initialization();

    bool setup();  // Sets up the game engine components.
    void cleanup();  // Cleans up resources before shutting down.
};
