// the goal of this class is take in various events and parcel them into
// something more intuitive e.g. we will take in all sf key events and turn them
// into a bitmask
#pragma once

#include <bitset>

class EventHandler {

public:
  EventHandler() = default;
  void ProcessKeyboardPressed(size_t keyCode);
  void ProcessKeyboardReleased(size_t keyCode);
  void clearSets();

  void setRelease(bool);

private:
  // flags for single and combinations of keys pressed
  std::bitset<101> m_keyset;

  // a bool to indicate whether the EventHandler is ready to released
  // information this is so that game updating happens after all pollEvents have
  // been processed
  bool m_release{false};
};
