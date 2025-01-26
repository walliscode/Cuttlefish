#include "tile.h"

Tile::Tile(sf::FloatRect viewPort) { m_tile.setViewport(viewPort); };

const sf::View &Tile::getTile() const { return m_tile; };
