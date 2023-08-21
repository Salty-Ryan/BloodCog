#include "Chunk.h"
#include "Logger.h"
#include "FastNoiseLite.h"


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
    FastNoiseLite noise;
    noise.SetNoiseType(FastNoiseLite::NoiseType_OpenSimplex2);

    // Sample the noise at different positions
    for (int x = 0; x < CHUNK_SIZE; x++) {
        for (int z = 0; z < CHUNK_SIZE; z++) {
            float height = noise.GetNoise((float)x, (float)z);
            // Use the height value to set the terrain height at (x, z)
            // This is a basic example, and you'll likely want to scale and adjust the noise values to fit your desired terrain shape.
        }
    }

    Logger::log("Generating terrain for chunk.");
}


void Chunk::render() {
    // TODO: Render the chunk's terrain and any entities within it.

    Logger::log("Rendering chunk.");
}
