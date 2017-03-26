#include <wonder/WalkCommand.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  void WalkCommand::execute(){
    if (world.lastUserInput.has(1)) {
      std::cout << world.lastUserInput.get(1);
    }

  }

} /* namespace wonder */
