#include <wonder/SuperString.hpp>
#include <wonder/StringUtil.hpp>
#include <string>
#include <iostream>

namespace wonder {

SuperString::SuperString(std::string string) {
  set(string);
}

bool SuperString::has(unsigned int index) {
  if (tokenCache.size() > index) {
    return true;
  }

  return false;
}

std::string SuperString::get(unsigned int index) {
  return tokenCache.at(index);
}

void SuperString::set(std::string string) {
  tokenCache = StringUtil::split(string, ' ');
}
} /* namespace wonder */
