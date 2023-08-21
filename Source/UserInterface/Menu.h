#pragma once

class Menu {
public:
    Menu();  // Constructor.
    ~Menu();  // Destructor.

    void show();  // Display the menu.
    void hide();  // Hide the menu.
    void selectOption(int optionIndex);  // Handle the selection of a menu option.

private:
    // TODO: Add private member variables for menu items, selected index, etc.
    // Example:
    // std::vector<MenuItem> items;
    // int selectedIndex;
};
