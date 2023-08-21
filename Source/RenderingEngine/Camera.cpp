#include "Camera.h"
#include "Logger.h"

Camera::Camera() : position(0, 0, 0), pitch(0), yaw(0) {
    Logger::log("Camera constructor called.");
}

Camera::~Camera() {
    Logger::log("Camera destructor called.");
}

void Camera::move(float deltaX, float deltaY, float deltaZ) {
    position.x += deltaX;
    position.y += deltaY;
    position.z += deltaZ;
    Logger::log("Moving camera.");
}

void Camera::rotate(float pitchDelta, float yawDelta) {
    pitch += pitchDelta;
    yaw += yawDelta;
    Logger::log("Rotating camera.");
}

void Camera::zoom(float amount) {
    // Assuming a simple dolly zoom by moving the camera forward or backward.
    position.z += amount;
    Logger::log("Zooming camera.");
}
