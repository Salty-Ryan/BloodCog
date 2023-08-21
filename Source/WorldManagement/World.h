#pragma once

class World {
public:
    World();
    ~World();

    void generate();  // Generate the game world.
    void update();    // Update the world state.

private:
    // List or array of chunks, entities, and players.
};
