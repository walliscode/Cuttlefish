#pragma once
#include "session.h"
#include <SFML/Graphics.hpp>
#include <array>
#include <memory>

class DisplayManager {

public:
  DisplayManager();
  void init();
  void run();

  // Session functions
  // add a new session
  void addSession(const size_t &sessionNumber);
  // remove a session
  void removeSession(const size_t &sessionNumber);

private:
  sf::RenderWindow m_window;
  std::array<std::shared_ptr<Session>, 5> m_sessions;
  std::vector<std::shared_ptr<sf::Drawable>> drawables;
};
