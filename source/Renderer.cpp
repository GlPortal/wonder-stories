#include <wonder/Renderer.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  Renderer::Renderer(World &world):world(world) {
  }

  void Renderer::render(){
    std::cout << std::endl << "Points: 0  Room: " << world.currentRoom << std::endl << std::endl;
    std::cout << world.roomMap.find(world.currentRoom)->second.description << std::endl;
  }

} /* namespace wonder */
