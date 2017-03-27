#ifndef GAME_HPP
#define GAME_HPP

#include <radix/env/Config.hpp>
#include <wonder/Room.hpp>
#include <wonder/Renderer.hpp>

namespace wonder {

class Game {
public:
  Game();
  void update();
  bool isRunning;
  World &getWorld();
private:
  World world;
};

} /* namespace wonder */

#endif /* GAME_HPP */
