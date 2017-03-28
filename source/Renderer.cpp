#include <wonder/Renderer.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

  Renderer::Renderer(World &world):world(world) {
  }

  void Renderer::render(){
    Room currentRoom = world.roomMap.find(world.currentRoom)->second;
    std::cout << "┌────────────────────────────┐" << std::endl;
    std::cout << "│Points: 0  Room: " << world.currentRoom << "      │" << std::endl;
    std::cout << "└────────────────────────────┘" << std::endl;
    std::cout << currentRoom.description << std::endl;

    for (auto& item: currentRoom.items) {
      std::cout << "You see a " << item.first << ". " << std::endl;
    }

    std::cout << std::endl << world.commandOutput;
    world.commandOutput = "";
  }

} /* namespace wonder */
