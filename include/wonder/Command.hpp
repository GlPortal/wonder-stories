#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <map>
#include <radix/env/Config.hpp>
#include <wonder/World.hpp>

namespace wonder {
  class World;
  class Command {
  protected:
    World &world;
  public:
    Command(World &world);
    virtual void execute();
  };

} /* namespace wonder */

#endif /* COMMAND_HPP */
