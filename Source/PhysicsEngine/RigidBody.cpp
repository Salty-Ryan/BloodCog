#include "RigidBody.h"
#include "Logger.h"

RigidBody::RigidBody() : velocity(0, 0, 0), acceleration(0, 0, 0) {
    Logger::log("RigidBody constructor called.");
}

RigidBody::~RigidBody() {
    Logger::log("RigidBody destructor called.");
}

void RigidBody::applyForce(const Vector3& force) {
    acceleration += force;  // Update acceleration based on the applied force.
    Logger::log("Applying force to RigidBody.");
}

void RigidBody::update(float deltaTime) {
    velocity += acceleration * deltaTime;  // Update velocity based on acceleration.
    position += velocity * deltaTime;      // Update position based on velocity.
    acceleration = Vector3(0, 0, 0);       // Reset acceleration after applying forces.

    Logger::log("Updating RigidBody.");
}
