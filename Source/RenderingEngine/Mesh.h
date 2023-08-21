#pragma once

class Mesh {
public:
    Mesh();
    ~Mesh();

    void loadFromOBJ(const char* objPath);  // Load mesh from an OBJ file.
    void draw();  // Render the mesh.

private:
    // Vertex data, normals, UVs, etc.
};
