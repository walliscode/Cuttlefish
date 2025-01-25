module;
#include <iostream>

export module display:display_manager;

export class DisplayManager {
public:
    DisplayManager() = default;
    void display() { std::cout << "Displaying" << std::endl; };
};
