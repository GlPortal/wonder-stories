#include <wonder/Game.hpp>
#include <wonder/InputDriver.hpp>
#include <string>
#include <linenoise.hpp>
#include <iostream>

using namespace radix;

namespace wonder {

InputDriver::InputDriver(Game &game):game(game) {
  setupReadline();
}

void InputDriver::setupReadline() {
  // Enable the multi-line mode
  linenoise::SetMultiLine(true);

  // Set max length of the history
  linenoise::SetHistoryMaxLen(4);
  setupCompletion();

  // Load history
  linenoise::LoadHistory(path.c_str());
}

void InputDriver::processInput() {
  std::string line;

  auto quit = linenoise::Readline(" > ", line);

  if (quit) {
    game.isRunning = false;
  }

  game.setInput(line);
  // Add line to history
  linenoise::AddHistory(line.c_str());

  // Save history
  linenoise::SaveHistory(path.c_str());
}

void InputDriver::setupCompletion() {
  linenoise::SetCompletionCallback([](const char* editBuffer, std::vector<std::string>& completions) {
      if (editBuffer[0] == 'h') {
        completions.push_back("help");
      }

      if (editBuffer[0] == 'e') {
        completions.push_back("exit");
        completions.push_back("echo");
      }

      if (editBuffer[0] == 'q') {
        completions.push_back("quit");
      }
    });
}

} /* namespace wonder */
