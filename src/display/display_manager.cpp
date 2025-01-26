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

void DisplayManager::addSession(const size_t &sessionNumber) {
  // create a new session and add it to the sessions vector at the given index
  std::shared_ptr<Session> newSession = std::make_shared<Session>("tile1");

  // create iterator for insertion
  auto it = m_sessions.begin() + sessionNumber;
  m_sessions.insert(it, newSession);
};

void DisplayManager::removeSession(const size_t &sessionNumber) {
  // make sure we do not remove the first session
  if (sessionNumber == 0) {
    return;
  }

  // remove a session from the sessions vector at the given index
  m_sessions.erase(m_sessions.begin() + sessionNumber);
};
