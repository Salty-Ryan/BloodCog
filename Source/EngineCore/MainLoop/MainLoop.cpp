#include "MainLoop.h"
#include "Logger.h"

MainLoop::MainLoop() {
    Logger::log("MainLoop constructor called.");
}

MainLoop::~MainLoop() {
    Logger::log("MainLoop destructor called.");
}

void MainLoop::start() {
    // TODO: Implement the main game loop logic. This might involve updating game state, rendering, handling input, etc.

    Logger::log("Starting main game loop.");

    while (running) {
        // Example loop:
        // handleInput();
        // update();
        // render();
    }
}

void MainLoop::stop() {
    running = false;
    Logger::log("Stopping main game loop.");
}

void MainLoop::render() {
    // Render the game using the RenderingEngine.
    
    // TODO: Add rendering logic here.
}

void MainLoop::terminate() {  // Added a function to safely terminate the loop.
    Logger::log("Terminating the main game loop...");
    isRunning = false;
}
