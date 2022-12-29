#ifndef GAMESCENE_H
#define GAMESCENE_H

#include <vector>
#include "entity/gameObject.h"

class GameScene{
    std::vector<GameObject*> gameObjects;
public:
    void addGameObject(GameObject * gameObject);
    void render();
    void update();
    void fixedUpdate();
};

#endif