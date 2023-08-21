#include "RigidBody.h"
#include "Logger.h"

RigidBody::RigidBody() {
    Logger::log("RigidBody constructor called.");
}

RigidBody::~RigidBody() {
    Logger::log("RigidBody destructor called.");
}

void RigidBody::applyForce(const Vector3& force) {
    // TODO: Apply the given force to this rigid body.

    Logger::log("Applying force to RigidBody.");
}

void RigidBody::update(float deltaTime) {
    // TODO: Update the rigid body's state based on forces, velocity, etc.

    Logger::log("Updating RigidBody.");
}
