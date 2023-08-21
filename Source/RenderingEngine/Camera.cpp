#include "Camera.h"

Camera::Camera() : posX(0), posY(0), posZ(0), pitch(0), yaw(0), roll(0) {}

Camera::~Camera() {}

void Camera::update() {
    // Update camera's position, rotation, etc.
}

void Camera::setPosition(float x, float y, float z) {
    posX = x;
    posY = y;
    posZ = z;
}

void Camera::setRotation(float p, float y, float r) {
    pitch = p;
    yaw = y;
    roll = r;
}
