#include "display_manager.h"
#include <iostream>

DisplayManager::DisplayManager() {
  m_sessions.fill(nullptr);
  init();
};

void DisplayManager::init() {
  // create the window
  std::cout << "Creating window" << std::endl;
  m_window.create(sf::VideoMode({1200, 900}), "SFML window");

  // add a Session to the sessions vector at position 0
  addSession(0);
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
  // check if vector is empty at
  // create a new session and add it to the sessions vector at the given index
  std::shared_ptr<Session> newSession = std::make_shared<Session>("tile1");
  m_sessions[sessionNumber] = newSession;
};

void DisplayManager::removeSession(const size_t &sessionNumber) {
  // make sure we do not remove the first session
  if (sessionNumber == 0) {
    return;
  }

  // remove the session at the given index
  m_sessions[sessionNumber] = nullptr;
};
