#include "display_manager.h"
#include <iostream>

DisplayManager::DisplayManager() { init(); };

void DisplayManager::init() {
  std::cout << "Creating window" << std::endl;
  m_window.create(sf::VideoMode({1200, 900}), "SFML window");
};

void DisplayManager::run() {
  while (m_window.isOpen()) {

    // add in options for overwriding user input such as closing the program
    while (const std::optional event = m_window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        m_window.close();
      }
    }

    // clear window; this has to happen to prevent previous buffers from being
    // drawn
    m_window.clear(sf::Color::Black);

    // draw all the drawables provided to the display manager class u {
    for (const auto &drawable : drawables) {
      m_window.draw(*drawable);
    }

    m_window.display();
  }
};
