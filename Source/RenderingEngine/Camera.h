#pragma once

class Camera {
public:
    Camera();
    ~Camera();

    void update();  // Update camera's position, rotation, etc.
    void setPosition(float x, float y, float z);
    void setRotation(float pitch, float yaw, float roll);

private:
    float posX, posY, posZ;
    float pitch, yaw, roll;  // rotation angles
};
