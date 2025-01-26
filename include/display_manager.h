#include <SFML/Graphics.hpp>
#include <memory>

class DisplayManager {

public:
  DisplayManager();
  void init();
  void run();

private:
  sf::RenderWindow m_window;

  std::vector<std::shared_ptr<sf::Drawable>> drawables;
};
