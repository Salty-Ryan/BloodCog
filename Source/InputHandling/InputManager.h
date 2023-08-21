#pragma once

class InputManager {
public:
    InputManager();
    ~InputManager();

    bool isKeyPressed(int keyCode);
    bool isMousePressed(int buttonCode);
    // ... other input methods.

private:
    // Input state data.
};
