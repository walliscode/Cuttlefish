module;
#include <SFML/Graphics.hpp>
export module display:display_manager;

export class DisplayManager {

private:
  sf::RenderWindow m_window;
  void init();

public:
  DisplayManager();

  void run();
  void display();
};
