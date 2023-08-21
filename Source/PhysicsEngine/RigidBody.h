#pragma once

class Rigidbody {
public:
    Rigidbody();
    ~Rigidbody();

    void applyForce(float x, float y, float z);  // Apply a force to the rigidbody.

private:
    float mass;
    float velocityX, velocityY, velocityZ;
};
