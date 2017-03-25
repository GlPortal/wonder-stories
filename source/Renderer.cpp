#include <wonder/Renderer.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  Renderer::Renderer(World &world):world(world) {
  }

  void Renderer::render(){
    std::cout << world.currentRoom << std::endl;
    std::cout << world.roomMap.find(world.currentRoom)->second.description << std::endl;
  }

} /* namespace wonder */
