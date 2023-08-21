#pragma once
#include <vector>
#include "Chunk.h"

class World {
public:
    World();  // Constructor.
    ~World();  // Destructor.

    void generateWorld();  // Generate the world with chunks.
    void renderWorld();  // Render the entire world.

private:
    std::vector<Chunk> chunks;  // Collection of chunks that make up the world.
};
