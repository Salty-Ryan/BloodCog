#pragma once
#include <map>

class KeyBindings {
public:
    KeyBindings();
    ~KeyBindings();

    void bindKey(int keyCode, const char* action);
    const char* getAction(int keyCode);

private:
    std::map<int, const char*> keyMap;  // Map key codes to game actions.
};
