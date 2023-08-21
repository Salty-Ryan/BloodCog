#pragma once
#include <vector>

// Forward declaration for Entity class.
// Assuming you have an Entity class that represents game objects within a chunk.
class Entity;

class Chunk {
public:
    Chunk();
    ~Chunk();

    void generateTerrain();
    void render();

private:
    // Terrain data for the chunk.
    // TODO: Define a TerrainData class or struct that contains data about the terrain in the chunk.
    // TerrainData terrain;

    // Entities within the chunk.
    std::vector<Entity> entities;
};
