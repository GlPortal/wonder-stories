#include <wonder/StringUtil.hpp>
#include <string>
#include <iostream>
#include <sstream>

namespace wonder {
std::vector<std::string> StringUtil::split(const std::string inputString, char delimiter)
{
  std::vector<std::string> elements;
  std::stringstream stringStream(inputString);
  std::string item;
  while(std::getline(stringStream, item, delimiter)) {
    elements.push_back(item);
  }
  return elements;
}

} /* namespace wonder */



