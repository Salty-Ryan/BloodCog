#pragma once

#include <vector>

class AIAgent;  // Forward declaration for AIAgent class.
class BehaviorTree;  // Forward declaration for BehaviorTree class.

class AIManager {
public:
    AIManager();  // Constructor.
    ~AIManager();  // Destructor.

    bool initialize();  // Initialize the AI manager.
    void updateAI();  // Update AI logic.
    void cleanup();  // Clean up and release resources.

private:
    std::vector<AIAgent*> agents;  // List of AI agents.
    BehaviorTree* behaviorTree;  // Behavior tree for AI logic.
};
