module;
#include <SFML/Graphics.hpp>
#include <iostream>

module display;

DisplayManager::DisplayManager() { init(); };

void DisplayManager::init() {
  std::cout << "Initializing Window" << std::endl;
  m_window.create(sf::VideoMode({800, 600}), "SFML works!");
  std::cout << "Window intialised with dimensions: " << m_window.getSize().x
            << "x" << m_window.getSize().y << std::endl;
}

void DisplayManager::display() { std::cout << "Displaying" << std::endl; };

void DisplayManager::run() {

  // run the program as long as the window is open
  while (m_window.isOpen()) {
    // check all the window's events that were triggered since the last
    // iteration of the loop
    while (const std::optional event = m_window.pollEvent()) {
      // "close requested" event: we close the window
      if (event->is<sf::Event::Closed>())
        m_window.close();
    }

    // clear the window with black color
    m_window.clear(sf::Color::Black);

    // draw everything here...
    // window.draw(...);

    // end the current frame
    m_window.display();
  }
};
