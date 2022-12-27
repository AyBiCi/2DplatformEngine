#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component{
    std::string name;
public:
    Component(std::string name);
    virtual void update();
    virtual void fixedUpdate();
    virtual void render();
};

#endif