#pragma once

#include <SFML/Graphics.hpp>
#include <bitset>
struct ActionBinding {
  // create std:bitset of 101 in length, all set to 0. This is map combination
  // of sfml keys to for custom actions
  typedef std::bitset<101> ActionSet;

  const ActionSet ACTION_SESSION_1_TOGGLE =
      ((ActionSet)1 << static_cast<int>(sf::Keyboard::Key::LAlt)) &
      ((ActionSet)1 << static_cast<int>(sf::Keyboard::Key::Num1));
};
