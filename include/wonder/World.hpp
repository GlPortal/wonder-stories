#ifndef WORLD_HPP
#define WORLD_HPP

#include <string>
#include <map>
#include <vector>
#include <wonder/Room.hpp>
#include <wonder/Item.hpp>
#include <wonder/SuperString.hpp>

namespace wonder {
  class Room;
  class Item;
  class World {
  public:
    World();
    std::map<std::string, Room> roomMap;
    std::map<std::string, Item> inventory;
    std::string currentRoom;
    SuperString lastUserInput;
    std::string commandOutput;
  };

} /* namespace wonder */

#endif /* WORLD_HPP */
