#include "World.h"
#include "Logger.h"
#include "Chunk.h"  // Assuming you have a Chunk class

World::World() {
    Logger::log("World constructor called.");
}

World::~World() {
    Logger::log("World destructor called.");
}

void World::generateWorld() {
    // TODO: Implement world generation logic. This might involve generating multiple chunks.
    // For demonstration purposes, we'll generate a few chunks here.
    for (int i = 0; i < 10; ++i) {
        Chunk chunk;
        chunks.push_back(chunk);
    }

    Logger::log("Generating world.");
}

void World::renderWorld() {
    // Render all chunks and entities in the world.
    for (auto& chunk : chunks) {
        chunk.render();
    }

    Logger::log("Rendering world.");
}

void World::updateWorld(float deltaTime) {
    // TODO: Update world state, such as moving entities, updating physics, etc.
    // For demonstration purposes, we'll update each chunk here.
    for (auto& chunk : chunks) {
        chunk.update(deltaTime);
    }

    Logger::log("Updating world.");
}
