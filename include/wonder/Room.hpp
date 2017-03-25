#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <map>
#include <radix/env/Config.hpp>
#include <wonder/Command.hpp>

namespace wonder {

  class Room {
  public:
    Room();
    std::map<std::string, bool> connectedRooms;
    std::string name;
    std::string description;
  };

} /* namespace wonder */

#endif /* ROOM_HPP */
