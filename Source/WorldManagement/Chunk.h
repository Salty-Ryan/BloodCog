#pragma once

class Chunk {
public:
    Chunk();  // Constructor.
    ~Chunk();  // Destructor.

    void generateTerrain();  // Generate the terrain for this chunk.
    void render();  // Render the chunk.

private:
    // TODO: Add private member variables for terrain data, entities in the chunk, etc.
    // Example:
    // TerrainData terrain;
    // std::vector<Entity> entities;
};
