#ifndef ITEM_HPP
#define ITEM_HPP

#include <vector>
#include <map>
#include <string>
#include <radix/env/Config.hpp>
#include <wonder/Command.hpp>

namespace wonder {
  class Command;
  class Item {
  private:

  public:
    Item();
    std::string name;
    std::string description;
    std::map<std::string, Command> verbMap;
  };

} /* namespace wonder */

#endif /* ITEM_HPP */
