

#include <SFML/Graphics.hpp>

class Tile {

public:
  Tile(sf::FloatRect viewPort);
  const sf::View &getTile() const;

private:
  sf::View m_tile;
};
