#ifndef INPUT_DRIVER_HPP
#define INPUT_DRIVER_HPP

#include <wonder/Game.hpp>

namespace wonder {

  class InputDriver {
  public:
    InputDriver(Game &game);
  private:
    Game &game;
    const std::string path = "history.txt";
    void setupReadline();
    void setupCompletion();
  };

} /* namespace wonder */

#endif /* INPUT_DRIVER_HPP */
