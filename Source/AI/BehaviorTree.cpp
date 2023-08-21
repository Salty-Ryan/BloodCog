#include "BehaviorTree.h"
#include "Logger.h"

BehaviorTree::BehaviorTree() : rootNode(nullptr) {
    Logger::log("BehaviorTree constructor called.");
}

BehaviorTree::~BehaviorTree() {
    // TODO: Cleanup logic for behavior tree nodes.
    Logger::log("BehaviorTree destructor called.");
}

void BehaviorTree::execute() {
    if (rootNode) {
        rootNode->execute();
    }
    Logger::log("Executing behavior tree.");
}
