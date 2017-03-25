#include <wonder/WalkCommand.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  void WalkCommand::execute(){
    std::cout << world.lastUserInput;
  }

} /* namespace wonder */
