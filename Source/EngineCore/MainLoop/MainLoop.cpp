#include "MainLoop.h"
#include "Logger.h"

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
    while (running) {
        // Process input.
        InputManager::getInstance().processInput();

        // Update game state based on current state.
        GameStateManager::getInstance().update(FIXED_TIME_STEP);

        // Render the game.
        RenderingEngine::getInstance().render();
    }
}

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

// ... rest of the methods remain unchanged ...
