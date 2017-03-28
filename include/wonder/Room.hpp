#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <map>
#include <radix/env/Config.hpp>
#include <wonder/Command.hpp>
#include <wonder/Item.hpp>

namespace wonder {
  class Item;
  class Room {
  public:
    Room(std::string name, std::string description);
    std::map<std::string, Item> items;
    std::map<std::string, bool> connectedRooms;
    std::string name;
    std::string description;
  };

} /* namespace wonder */

#endif /* ROOM_HPP */
