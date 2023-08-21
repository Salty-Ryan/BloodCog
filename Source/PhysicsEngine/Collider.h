#pragma once

class Collider {
public:
    Collider();  // Constructor.
    ~Collider();  // Destructor.

    bool checkCollision(const Collider& other) const;  // Check if this collider collides with another.

private:
    // TODO: Add private member variables for collider shape, position, size, etc.
    // Example:
    // ShapeType shape;  // e.g., BOX, SPHERE, etc.
    // Vector3 position;
    // Vector3 size;
};
