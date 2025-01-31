#include "event_handler.h"

EventHandler::EventHandler() {};

// flip bits at the position give by the keyCode
void EventHandler::ProcessKeyboardEvents(size_t keyCode) {
  m_keyset.set(keyCode);
};
