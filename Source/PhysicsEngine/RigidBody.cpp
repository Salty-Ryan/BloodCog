#include "Rigidbody.h"

Rigidbody::Rigidbody() : mass(1.0f), velocityX(0), velocityY(0), velocityZ(0) {}

Rigidbody::~Rigidbody() {}

void Rigidbody::applyForce(float x, float y, float z) {
    // Apply force and update velocities.
}
