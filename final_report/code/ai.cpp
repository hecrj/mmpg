#include "ai.hpp"

using namespace space_wars;

class SimpleAI : public space_wars::AI {
 public:
  SimpleAI() {

  }

  void Play() {
    ScanUniverse();

    int me_ = me();

    for(int planet_id : owned_planets(me_)) {
      const Planet& owned = planet(planet_id);

      for(int connection_id : owned.connections) {
        const Planet& connection = planet(connection_id);

        if(connection.owner != me_ and owned.ships / 2 > connection.ships) {
          SendFleet(planet_id, connection_id, owned.ships / 2);
          return;
        }
      }
    }
  }
};

RegisterAI(SimpleAI)
