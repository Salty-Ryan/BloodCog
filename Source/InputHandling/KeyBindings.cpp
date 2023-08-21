#include "KeyBindings.h"

KeyBindings::KeyBindings() {}

KeyBindings::~KeyBindings() {}

void KeyBindings::bindKey(int keyCode, const char* action) {
    keyMap[keyCode] = action;
}

const char* KeyBindings::getAction(int keyCode) {
    return keyMap[keyCode];
}
