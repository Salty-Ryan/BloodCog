#pragma once

class RenderingEngine {
public:
    RenderingEngine();
    ~RenderingEngine();

    void initialize();  // Initialize rendering context, shaders, etc.
    void draw();  // Draw the game scene.
    void cleanup();  // Clean up rendering resources.
};
