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
  void setInput(std::string input);
private:
  World world;
  std::string input;
};

} /* namespace wonder */

#endif /* GAME_HPP */
