#include <wonder/Game.hpp>
#include <wonder/Renderer.hpp>
#include <wonder/InputDriver.hpp>
#include <wonder/CommandSystem.hpp>

#include <radix/env/Environment.hpp>
#include <radix/env/ArgumentsParser.hpp>
#include <radix/env/Util.hpp>
#include <radix/core/diag/Throwables.hpp>
#include <iostream>

#undef main
using namespace std;
using namespace wonder;

int main(const int argc, char *argv[]) {
  radix::Util::Init();
  radix::ArgumentsParser::setEnvironmentFromArgs(argc, argv);
  try {
    Game game;
    InputDriver inputDriver(game);
    Renderer renderer(game.getWorld());
    CommandSystem commandSystem(game);
    while (game.isRunning) {
      renderer.render();
      inputDriver.processInput();
      commandSystem.run();
      game.update();
    }
  } catch (radix::Exception::Error &err) {
    radix::Util::Log(radix::Error, err.source()) << err.what();
  }

  return 0;
}
