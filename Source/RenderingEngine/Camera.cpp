#include "Camera.h"
#include "Logger.h"

Camera::Camera() {
    Logger::log("Camera constructor called.");
}

Camera::~Camera() {
    Logger::log("Camera destructor called.");
}

void Camera::move(float deltaX, float deltaY, float deltaZ) {
    // TODO: Move the camera based on the deltas.

    Logger::log("Moving camera.");
}

void Camera::rotate(float pitch, float yaw) {
    // TODO: Rotate the camera based on pitch and yaw values.

    Logger::log("Rotating camera.");
}

void Camera::zoom(float amount) {
    // TODO: Zoom (or dolly) the camera based on the amount.

    Logger::log("Zooming camera.");
}
