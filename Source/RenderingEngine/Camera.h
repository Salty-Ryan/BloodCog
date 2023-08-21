#pragma once

class Camera {
public:
    Camera();  // Constructor.
    ~Camera();  // Destructor.

    void move(float deltaX, float deltaY, float deltaZ);  // Move the camera.
    void rotate(float pitch, float yaw);  // Rotate the camera.
    void zoom(float amount);  // Zoom the camera.

private:
    // TODO: Add private member variables for camera position, rotation, zoom level, etc.
    // Example:
    // Vector3 position;
    // float pitch, yaw;
    // float zoomLevel;
};
