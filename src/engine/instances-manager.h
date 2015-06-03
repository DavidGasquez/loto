
#ifndef BASE_INSTANCES_MANAGER_H_
#define BASE_INSTANCES_MANAGER_H_

#include <SFML/Graphics.hpp>

#include <vector>

#include "engine/instance.h"
#include "engine/game-event.h"


class InstancesManager {
 public:
  void AddInstance(Instance *instance);
  void RemoveInstance(Instance *instance);

  void Draw(sf::RenderTarget *target);
  void Step(sf::Time elapsed);

  void KeyPressed(sf::Event::KeyEvent event);
  void KeyReleased(sf::Event::KeyEvent event);

  void MousePressed(sf::Event::MouseButtonEvent event);
  void MouseReleased(sf::Event::MouseButtonEvent event);
  void MouseMoved(sf::Event::MouseMoveEvent event);

  void GameEvent(GameEvent event);

 private:
  std::vector < Instance * > instances_;
};

#endif  // BASE_INSTANCES_MANAGER_H_
