#include "Mesh.h"
#include "Logger.h"

Mesh::Mesh() {
    Logger::log("Mesh constructor called.");
}

Mesh::~Mesh() {
    Logger::log("Mesh destructor called.");
}

void Mesh::loadFromOBJ(const char* objPath) {
    // TODO: Implement loading mesh data from an OBJ file.
    Logger::log("Loading mesh from OBJ.");
}

void Mesh::draw() {
    // TODO: Implement rendering logic for the mesh.
    Logger::log("Rendering mesh.");
}
