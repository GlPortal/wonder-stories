#ifndef STRING_UTIL_HPP
#define STRING_UTIL_HPP

#include <vector>
#include <string>

namespace wonder {

  class StringUtil {
  public:
    static std::vector<std::string> split(const std::string string, char delimiter);
  };

} /* namespace wonder */

#endif /* STRING_UTIL_HPP */
