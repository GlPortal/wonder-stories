#ifndef ROOM_HPP
#define ROOM_HPP

#include <string>
#include <radix/env/Config.hpp>

namespace wonder {

  class Room {
  public:
    Room();
    std::string name;
    std::string description;
  };

} /* namespace wonder */

#endif /* ROOM_HPP */
