#include "MainLoop.h"

MainLoop::MainLoop() {
    // Constructor logic, if any.
}

MainLoop::~MainLoop() {
    // Destructor logic, if any.
}

void MainLoop::run() {
    while (true) {  // Replace with a condition to exit the game.
        handleEvents();
        update();
        render();
    }
}

void MainLoop::handleEvents() {
    // Handle user input, window events, etc.
}

void MainLoop::update() {
    // Update game state, physics, AI, etc.
}

void MainLoop::render() {
    // Render the game using the RenderingEngine.
}
