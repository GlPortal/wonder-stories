#include <wonder/Renderer.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  Renderer::Renderer(World &world):world(world) {
  }

  void Renderer::render(){
    std::cout << "┌────────────────────────────┐" << std::endl;
    std::cout << "│Points: 0  Room: " << world.currentRoom << "      │" << std::endl;
    std::cout << "└────────────────────────────┘" << std::endl;
    std::cout << world.roomMap.find(world.currentRoom)->second.description << std::endl;
    for ( auto &item :  world.items) {
      std::cout << "You see a " << item.name << ". " << std::endl;
    }
    std::cout << std::endl << world.commandOutput;
    world.commandOutput = "";
  }

} /* namespace wonder */
