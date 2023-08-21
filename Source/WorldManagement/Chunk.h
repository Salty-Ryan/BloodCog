#pragma once
#include <vector>
#include "Chunk.h"

class World {
public:
    World(unsigned int seed);  // Constructor with seed for procedural generation.
    ~World();  // Destructor.

    void generateWorld();  // Generate the world with chunks.
    void renderWorld();  // Render the entire world.
    void updateWorld(float deltaTime);  // Update the world state.

private:
    std::vector<Chunk> chunks;  // Collection of chunks that make up the world.
    unsigned int worldSeed;  // Seed for procedural generation.
};
