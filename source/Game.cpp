#include <wonder/Game.hpp>
#include <wonder/Room.hpp>
#include <wonder/Item.hpp>
#include <wonder/World.hpp>
#include <wonder/SuperString.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

Game::Game():isRunning(true), world() {

}

void Game::update() {
  SuperString input = world.lastUserInput;
  if (input.has(0)) {
    if (input.get(0) == "help") {
      std::cout <<  "Valid commands:" << std::endl;
      std::cout <<  "quit, run, exit, help" << std::endl;
    }

    if (input.get(0) == "echo") {
      std::cout << input.get(0) << std::endl;
    }

    if (input.get(0) == "exit") {
      std::cout <<  "Exiting game" << std::endl;
      this->isRunning = false;
    }
  }
}

World &Game::getWorld() {
  return world;
}

} /* namespace wonder */
