
#ifndef CONTROLLERS_PLAYER_CONTROLLER_H_
#define CONTROLLERS_PLAYER_CONTROLLER_H_

class PlayerController {
 public:
  PlayerController();

  void Load();

  void Step(sf::Time elapsed);

 private:
};

#endif  // CONTROLLERS_PLAYER_CONTROLLER_H_