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
    // TODO: Add private member variables for shader IDs, uniform locations, etc.
    // Example:
    // unsigned int shaderID;
    // std::map<std::string, int> uniformLocations;
};
