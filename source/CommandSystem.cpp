#include <wonder/CommandSystem.hpp>
#include <wonder/SuperString.hpp>
#include <string>
#include <iostream>

namespace wonder {

  CommandSystem::CommandSystem(Game& game):game(game) {
  }

  void CommandSystem::run() {
    SuperString input = game.getWorld().lastUserInput;
    if (input.has(0)) {
      if (input.get(0) == "help") {
        game.getWorld().commandOutput += "Valid commands: \n";
        game.getWorld().commandOutput += "quit, run, exit, help \n";
      }

      if (input.get(0) == "echo") {
        if (input.has(1)) {
          game.getWorld().commandOutput += input.get(1) + "\n";
        } else {
          game.getWorld().commandOutput += "Parameter missing \n";
        }
      }

      if (input.get(0) == "exit") {
        std::cout <<  "Exiting game" << std::endl;
        game.isRunning = false;
      }
    }
  }

} /* namespace wonder */
