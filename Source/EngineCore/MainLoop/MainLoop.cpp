#include "MainLoop.h"
#include "Logger.h"
#include "InputManager.h"
#include "GameStateManager.h"
#include "RenderingEngine.h"
#include <chrono>  // For time functions

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

    auto previousTime = std::chrono::high_resolution_clock::now();
    while (running) {
        auto currentTime = std::chrono::high_resolution_clock::now();
        float deltaTime = std::chrono::duration<float>(currentTime - previousTime).count();
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

