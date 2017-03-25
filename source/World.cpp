#include <wonder/World.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  World::World():roomMap() {
    currentRoom = "start";
    Room startRoom(currentRoom, "A plain and empty room.");
    roomMap.insert(std::pair<std::string, Room>(std::string("start"), startRoom) );
  }

} /* namespace wonder */
