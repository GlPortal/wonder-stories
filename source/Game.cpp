#include <wonder/Game.hpp>
#include <wonder/Room.hpp>
#include <wonder/Item.hpp>
#include <wonder/World.hpp>
#include <string>
#include <iostream>

namespace wonder {

Game::Game():isRunning(true), world() {

}

void Game::update() {

}

World &Game::getWorld() {
  return world;
}

} /* namespace wonder */
