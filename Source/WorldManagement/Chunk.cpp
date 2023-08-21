#include "Chunk.h"
#include "Logger.h"

Chunk::Chunk(unsigned int seed, int chunkX, int chunkY) : chunkSeed(seed), x(chunkX), y(chunkY) {
    Logger::log("Chunk constructor called.");
    generateTerrain();
}

Chunk::Chunk() {
    Logger::log("Chunk constructor called.");
}

Chunk::~Chunk() {
    Logger::log("Chunk destructor called.");
}

void Chunk::generateTerrain() {
    // TODO: Implement terrain generation for this chunk.

    Logger::log("Generating terrain for chunk.");
}

void Chunk::render() {
    // TODO: Render the chunk's terrain and any entities within it.

    Logger::log("Rendering chunk.");
}
