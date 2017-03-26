#ifndef SUPER_STRING_HPP
#define SUPER_STRING_HPP

#include <string>
#include <vector>

namespace wonder {

  class SuperString {
  public:
    SuperString(std::string string);
    bool has(unsigned int index);
    std::string get(unsigned int index);
    void set(std::string);
  private:
    std::vector<std::string> tokenCache;
  };

} /* namespace wonder */

#endif /* SUPER_STRING_HPP */
