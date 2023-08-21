#include "Shader.h"
#include "Logger.h"

Shader::Shader() {
    Logger::log("Shader constructor called.");
}

Shader::~Shader() {
    cleanup();
    Logger::log("Shader destructor called.");
}

bool Shader::load(const std::string& vertexPath, const std::string& fragmentPath) {
    // TODO: Implement loading logic for vertex and fragment shaders.
    Logger::log("Loading shaders.");
    return true;
}

void Shader::bind() {
    // TODO: Implement shader binding logic.
    Logger::log("Binding shader.");
}

void Shader::unbind() {
    // TODO: Implement shader unbinding logic.
    Logger::log("Unbinding shader.");
}

void Shader::cleanup() {
    // TODO: Implement cleanup logic for the shader.
    Logger::log("Cleaning up shader.");
}
