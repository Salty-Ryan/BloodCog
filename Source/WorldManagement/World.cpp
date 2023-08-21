#include "World.h"
#include "Logger.h"

World::World() {
    Logger::log("World constructor called.");
}

World::~World() {
    Logger::log("World destructor called.");
}

void World::generateWorld() {
    // TODO: Implement world generation logic. This might involve generating multiple chunks.

    Logger::log("Generating world.");
}

void World::renderWorld() {
    // TODO: Render all chunks and entities in the world.

    for (auto& chunk : chunks) {
        chunk.render();
    }

    Logger::log("Rendering world.");
}
