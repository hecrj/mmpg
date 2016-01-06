#include <mmpg/master/process.hpp>
#include "my_world.hpp"

using namespace my_game;

int main() {
  // Create an empty world
  MyWorld world; // MyWorld extends mmpg::World

  // Run a master process with this type of world
  mmpg::master::Process master;
  master.Run(world);

  return 0;
}
