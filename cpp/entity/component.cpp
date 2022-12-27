#include "entity/component.h"

Component::Component(std::string name){
    this->name = name;
}

void Component::update(){}
void Component::fixedUpdate(){}
void Component::render(){}