#pragma once

class RenderingEngine {
public:
    RenderingEngine();  // Constructor.
    ~RenderingEngine();  // Destructor.

    bool initialize();  // Initialize the rendering engine.
    void render();  // Render a frame.
    void cleanup();  // Clean up and release resources.

private:
    // TODO: Add private member variables for rendering context, shaders, meshes, etc.
    // Example:
    // RenderContext* context;
    // std::vector<Shader*> shaders;
    // std::vector<Mesh*> meshes;
};
