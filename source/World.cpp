#include <wonder/World.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  World::World():roomMap(), lastUserInput(""), commandOutput("") {
    currentRoom = "start";
    std::string description =
      "You are in a plain and empty room.\n\nThere is a banjo on the floor.";
    Room startRoom(currentRoom, description);
    Item yoghurt;
    startRoom.items.insert(std::pair<std::string, Item>("Yoghurt", yoghurt) );
    Item banana;
    startRoom.items.insert(std::pair<std::string, Item>("Banana", banana) );
    Item rubberChicken;
    startRoom.items.insert(std::pair<std::string, Item>("Rubber Chicken with a Pulley", rubberChicken) );
    roomMap.insert(std::pair<std::string, Room>(std::string("start"), startRoom) );
  }

} /* namespace wonder */
