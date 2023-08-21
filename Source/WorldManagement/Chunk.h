#pragma once

class Chunk {
public:
    Chunk();
    ~Chunk();

    void generate();  // Generate the chunk.
    void draw();      // Render the chunk.

private:
    // Blocks or tiles in the chunk.
};
