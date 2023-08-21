#include "Menu.h"
#include "Logger.h"

Menu::Menu() {
    Logger::log("Menu constructor called.");
}

Menu::~Menu() {
    Logger::log("Menu destructor called.");
}

void Menu::show() {
    // TODO: Display the menu.

    Logger::log("Showing menu.");
}

void Menu::hide() {
    // TODO: Hide the menu.

    Logger::log("Hiding menu.");
}

void Menu::selectOption(int optionIndex) {
    // TODO: Handle the selection of a menu option.

    Logger::log("Selected menu option: " + std::to_string(optionIndex));
}
