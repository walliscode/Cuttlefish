#pragma once
#include "tile.h"
#include <map>
#include <memory>
#include <string>

typedef std::map<std::string, std::shared_ptr<Tile>> TileMap;

class Session {

public:
  Session(const std::string &tileName);
  void addTile(const std::string &name);

  std::shared_ptr<Tile> getTile(const std::string &name);
  std::shared_ptr<Tile> getActiveTile();
  void setActiveTile(const std::string &name);

private:
  TileMap m_tiles;
  std::shared_ptr<Tile> m_activeTile;
};
