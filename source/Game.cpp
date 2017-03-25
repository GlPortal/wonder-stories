#include <wonder/Game.hpp>
#include <wonder/Room.hpp>
#include <wonder/Item.hpp>
#include <wonder/World.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

Game::Game():world() {

}

void Game::update(std::string line) {
  if (line == "help") {
    std::cout <<  "Valid commands:" << std::endl;
    std::cout <<  "quit, run, exit, help" << std::endl;
  }

  if (line == "echo") {
    std::cout <<  line << std::endl;
  }
}

void Game::setupRooms() {
  room.name = "Start Room";
  room.description = "The floor feels warm.";
}

} /* namespace wonder */
