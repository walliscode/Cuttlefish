#pragma once

#include <SFML/Graphics.hpp>

class Tile {

public:
  Tile(sf::FloatRect viewPort);
  const sf::View &getTile() const;

private:
  sf::View m_tile;
  sf::FloatRect m_viewPort;
};
