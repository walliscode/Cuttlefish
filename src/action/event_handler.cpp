#include "event_handler.h"

// flip bits to 1 at the position give by the keyCode
void EventHandler::ProcessKeyboardPressed(size_t keyCode) {
  m_keyset.set(keyCode);
};

// flip bits to 0 at the position give by the keyCode
void EventHandler::ProcessKeyboardReleased(size_t keyCode) {
  m_keyset.reset(keyCode);
};

// clear specified members of class
void EventHandler::clearSets() { m_keyset.reset(); };

// set m_Release to true
void EventHandler::setRelease(bool release) { m_release = release; };
