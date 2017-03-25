#ifndef GAME_HPP
#define GAME_HPP

#include <radix/env/Config.hpp>
#include <wonder/Room.hpp>
#include <wonder/Renderer.hpp>

namespace wonder {

class Game {
public:
  Game();
  void update(std::string input);
private:
  Room room;
  World world;
  void setupRooms();
};

} /* namespace wonder */

#endif /* GAME_HPP */
