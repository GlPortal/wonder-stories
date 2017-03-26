#include <wonder/World.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  World::World():roomMap(), items(), lastUserInput(""), commandOutput("") {
    currentRoom = "start";
    std::string description =
      "You are in a plain and empty room.\n\nThere is a banjo on the floor.";
    Room startRoom(currentRoom, description);
    roomMap.insert(std::pair<std::string, Room>(std::string("start"), startRoom) );
    Item yoghurt;
    yoghurt.name = "Yoghurt";
    items.push_back(yoghurt);

    Item banana;
    banana.name = "Banana";
    items.push_back(banana);

  }

} /* namespace wonder */
