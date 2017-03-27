#ifndef COMMAND_SYSTEM_HPP
#define COMMAND_SYSTEM_HPP

#include <wonder/Game.hpp>

namespace wonder {
  class Game;
  class CommandSystem {
  private:
    Game& game;
  public:
    CommandSystem(Game& game );
    void run();
  };

} /* namespace wonder */

#endif /* COMMAND_SYSTEM_HPP */
