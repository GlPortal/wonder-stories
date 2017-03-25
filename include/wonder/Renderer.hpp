#ifndef RENDERER_HPP
#define RENDERER_HPP

#include <string>
#include <map>
#include <radix/env/Config.hpp>
#include <wonder/World.hpp>

namespace wonder {
  class World;
  class Renderer {
  protected:
    World &world;
  public:
    Renderer(World &world);
    void render();
  };

} /* namespace wonder */

#endif /* RENDERER_HPP */
