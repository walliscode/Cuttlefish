// the goal of this class is take in various events and parcel them into
// something more intuitive e.g. we will take in all sf key events and turn them
// into a bitmask
#pragma once
#include <SFML/Graphics.hpp>
#include <bitset>

class EventHandler {

public:
  EventHandler();
  void ProcessKeyboardEvents(size_t keyCode);

private:
  std::bitset<101> m_keyset;
};
