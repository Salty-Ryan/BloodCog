#pragma once

class World {
public:
    World();  // Constructor.
    ~World();  // Destructor.

    bool initialize();  // Initialize the World.
    void updateWorld();  // Update world logic.
    void cleanup();  // Clean up and release resources.

private:
    // TODO: Add private member variables for chunks, entities, etc.
    // Example:
    // std::vector<Chunk*> chunks;
    // std::vector<Entity*> entities;
};
