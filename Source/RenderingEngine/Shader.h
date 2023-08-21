#pragma once
#include <string>

class Shader {
public:
    Shader();  // Constructor.
    ~Shader();  // Destructor.

    bool load(const std::string& vertexPath, const std::string& fragmentPath);  // Load shader from files.
    void bind();  // Bind the shader for rendering.
    void unbind();  // Unbind the shader.
    void cleanup();  // Clean up shader resources.

private:
    unsigned int shaderID;  // ID for the shader program.
    // TODO: Add other private member variables for shader attributes, uniform locations, etc.
};
