
#ifndef STRUCTURES_TOWER_H_
#define STRUCTURES_TOWER_H_

#include "base/aliases.h"
#include "structures/structure.h"


class Tower : public Structure {
 public:
  void Load();

  void set_position(Vec2u pos);

  void draw(sf::RenderTarget& target,
            sf::RenderStates  states) const;

  void Step(sf::Time elapsed);
};

#endif  // STRUCTURES_TOWER_H_
