#pragma once

class Camera {
public:
    Camera();  // Constructor.
    ~Camera();  // Destructor.

    void move(float deltaX, float deltaY, float deltaZ);  // Move the camera.
    void rotate(float pitch, float yaw);  // Rotate the camera.
    void zoom(float amount);  // Zoom the camera.

private:
    Vector3 position;  // Camera position.
    float pitch, yaw;  // Camera rotation angles.
    float zoomLevel;   // Camera zoom level.
};
