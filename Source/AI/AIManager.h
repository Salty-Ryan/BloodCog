#pragma once

class AIManager {
public:
    AIManager();
    ~AIManager();

    void update();  // Update all AI entities.
    void addEntity(/*Entity or AI type*/);  // Add an AI entity to be managed.

private:
    // List or array of AI entities.
};
