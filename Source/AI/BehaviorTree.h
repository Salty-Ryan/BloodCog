#pragma once

class BehaviorTreeNode;  // Forward declaration for BehaviorTreeNode class.

class BehaviorTree {
public:
    BehaviorTree();
    ~BehaviorTree();

    void execute();  // Execute the behavior tree.

private:
    BehaviorTreeNode* rootNode;  // Root node of the behavior tree.
};
