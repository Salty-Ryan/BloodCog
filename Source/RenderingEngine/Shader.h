#pragma once

class Shader {
public:
    Shader(const char* vertexPath, const char* fragmentPath);
    ~Shader();

    void use();  // Activate the shader for rendering.
    void loadFromFile(const char* vertexPath, const char* fragmentPath);  // Load shader from file.

private:
    unsigned int shaderID;
};
