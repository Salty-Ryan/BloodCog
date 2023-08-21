#include "Shader.h"

Shader::Shader(const char* vertexPath, const char* fragmentPath) {
    loadFromFile(vertexPath, fragmentPath);
}

Shader::~Shader() {
    // Destructor logic, e.g., delete shader.
}

void Shader::use() {
    // Activate the shader.
}

void Shader::loadFromFile(const char* vertexPath, const char* fragmentPath) {
    // Load vertex and fragment shaders from files and compile them.
}
