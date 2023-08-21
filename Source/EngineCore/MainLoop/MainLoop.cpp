#include "MainLoop.h"
#include "Logger.h"  // Assuming you have a Logger for logging purposes.

MainLoop::MainLoop() : isRunning(true) {  // Added a member variable to control the loop.
    Logger::log("MainLoop constructor called.");
}

MainLoop::~MainLoop() {
    Logger::log("MainLoop destructor called.");
}

void MainLoop::run() {
    Logger::log("Starting the main game loop...");

    while (isRunning) {
        handleEvents();
        update();
        render();
    }

    Logger::log("Main game loop terminated.");
}

void MainLoop::handleEvents() {
    // Handle user input, window events, etc.
    
    // TODO: Add event handling code here.

    // Example: If a quit event is detected, set isRunning to false.
    // if (event == QUIT_EVENT) {
    //     isRunning = false;
    // }
}

void MainLoop::update() {
    // Update game state, physics, AI, etc.
    
    // TODO: Add game update logic here.
}

void MainLoop::render() {
    // Render the game using the RenderingEngine.
    
    // TODO: Add rendering logic here.
}

void MainLoop::terminate() {  // Added a function to safely terminate the loop.
    Logger::log("Terminating the main game loop...");
    isRunning = false;
}
