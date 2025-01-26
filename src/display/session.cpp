#include "session.h"
#include <memory>

Session::Session(const std::string &tileName) {
  // always start the session with one max sized tile
  std::shared_ptr<Tile> firstTile =
      std::make_shared<Tile>(sf::FloatRect({0.0f, 0.0f}, {1.0f, 1.0f}));
  m_tiles.insert({tileName, firstTile});

  // set active tile to the first tile
  m_activeTile = firstTile;
};

// add a new tile to the session
void Session::addTile(const std::string &name) {};

// get a tile by name
std::shared_ptr<Tile> Session::getTile(const std::string &name) {
  return m_tiles[name];
};

// get the active tile
std::shared_ptr<Tile> Session::getActiveTile() { return m_activeTile; };

// set the active tile
void Session::setActiveTile(const std::string &name) {
  m_activeTile = m_tiles[name];
};
