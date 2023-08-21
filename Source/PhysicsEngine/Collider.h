#pragma once

class Collider {
public:
    Collider();
    ~Collider();

    bool checkCollision(const Collider& other);  // Check if this collider collides with another.

private:
    // Shape data (e.g., box, sphere) for the collider.
};
