#include "World.h"
#include "Logger.h"

World::World() {
    Logger::log("World constructor called.");
}

World::~World() {
    cleanup();
    Logger::log("World destructor called.");
}

bool World::initialize() {
    Logger::log("Initializing World...");

    // TODO: Initialization logic.

    Logger::log("World initialized.");
    return true;
}

void World::updateWorld() {
    // TODO: World update logic.

    Logger::log("Updating World.");
}

void World::cleanup() {
    Logger::log("Cleaning up World...");

    // TODO: Cleanup logic.

    Logger::log("World cleaned up.");
}
