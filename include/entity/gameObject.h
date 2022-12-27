#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "entity/component.h"
#include <vector>

class GameObject{
    std::vector<Component*> components;
public:
    void addComponent(Component *component);
    void update();
    void fixedUpdate();
    void render();
};

#endif