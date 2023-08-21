#pragma once

class RigidBody {
public:
    RigidBody();  // Constructor.
    ~RigidBody();  // Destructor.

    void applyForce(const Vector3& force);  // Apply a force to the rigid body.
    void update(float deltaTime);  // Update the rigid body's state.

private:
    // TODO: Add private member variables for mass, velocity, acceleration, etc.
    // Example:
    // float mass;
    // Vector3 velocity;
    // Vector3 acceleration;
};
