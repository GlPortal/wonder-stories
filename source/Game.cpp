#include <wonder/Game.hpp>
#include <wonder/Room.hpp>
#include <wonder/Item.hpp>
#include <wonder/World.hpp>
#include <string>
#include <iostream>

using namespace radix;

namespace wonder {

Game::Game():isRunning(true), world() {

}

void Game::update() {
  if (input == "help") {
    std::cout <<  "Valid commands:" << std::endl;
    std::cout <<  "quit, run, exit, help" << std::endl;
  }

  if (input == "echo") {
    std::cout << input << std::endl;
  }

  if (input == "exit") {
    std::cout <<  "Exiting game" << std::endl;
    this->isRunning = false;
  }

}

void Game::setInput(std::string line) {
  this->input = line;
}

World &Game::getWorld() {
  return world;
}

} /* namespace wonder */
