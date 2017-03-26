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
      world.commandOutput += "Valid commands: \n";
      world.commandOutput += "quit, run, exit, help \n";
    }

    if (input.get(0) == "echo") {
      if (input.has(1)) {
        world.commandOutput += input.get(1) + "\n";
      } else {
        world.commandOutput += "Parameter missing \n";
      }
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
