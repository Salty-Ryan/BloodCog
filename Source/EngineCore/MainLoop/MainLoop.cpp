#include "MainLoop.h"
#include "Logger.h"
#include "InputManager.h"       // Assuming you have this class
#include "GameStateManager.h"   // Assuming you have this class
#include "RenderingEngine.h"    // Assuming you have this class

const float FIXED_TIME_STEP = 1.0f / 60.0f;  // 60 updates per second.
float accumulator = 0.0f;

MainLoop::MainLoop() {
    Logger::log("MainLoop constructor called.");
}

MainLoop::~MainLoop() {
    Logger::log("MainLoop destructor called.");
}

void MainLoop::start() {
    Logger::log("Starting main game loop.");

    float previousTime = getCurrentTime();
    while (running) {
        float currentTime = getCurrentTime();
        float deltaTime = currentTime - previousTime;
        previousTime = currentTime;

        accumulator += deltaTime;

        handleInput();

        while (accumulator >= FIXED_TIME_STEP) {
            update(FIXED_TIME_STEP);
            accumulator -= FIXED_TIME_STEP;
        }

        render(accumulator / FIXED_TIME_STEP);  // Interpolation factor.
    }
}

float MainLoop::getCurrentTime() {
    // TODO: Implement this method to return the current time.
    return 0.0f;  // Placeholder
}

void MainLoop::handleInput() {
    // Process input.
    InputManager::getInstance().processInput();
}

void MainLoop::update(float deltaTime) {
    // Update game state based on current state.
    GameStateManager::getInstance().update(deltaTime);
}

void MainLoop::render(float interpolationFactor) {
    // Render the game.
    RenderingEngine::getInstance().render(interpolationFactor);
}
