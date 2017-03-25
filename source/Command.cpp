#include <wonder/Command.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  Command::Command(World &world):world(world) {
  }

  void Command::execute(){}

} /* namespace wonder */
