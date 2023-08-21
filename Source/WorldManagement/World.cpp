#include "World.h"
#include "Logger.h"
#include "Chunk.h"

World::World() {
    Logger::log("World constructor called.");
    generateWorld();  // Generate the world when the World object is created.
}

World::~World() {
    Logger::log("World destructor called.");
}

void World::generateWorld() {
    Logger::log("Generating world.");

    // Generate a fixed number of chunks for demonstration purposes.
    for (int i = 0; i < 10; ++i) {
        Chunk chunk;
        chunk.generateTerrain();  // Generate terrain for each chunk.
        chunks.push_back(chunk);
    }
}

void World::renderWorld() {
    Logger::log("Rendering world.");

    // Render all chunks.
    for (auto& chunk : chunks) {
        chunk.render();
    }
}

void World::updateWorld(float deltaTime) {
    Logger::log("Updating world.");

    // Update each chunk.
    for (auto& chunk : chunks) {
        // TODO: Implement chunk update logic.
    }
}
