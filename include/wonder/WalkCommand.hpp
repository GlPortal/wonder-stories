#ifndef WALK_COMMAND_HPP
#define WALK_COMMAND_HPP

#include <string>
#include <map>
#include <radix/env/Config.hpp>
#include <wonder/Command.hpp>

namespace wonder {

  class WalkCommand: public Command {
  public:
    WalkCommand(World &world);
    void execute();
  };

} /* namespace wonder */

#endif /* WALK_COMMAND_HPP */
