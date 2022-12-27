#include "entity/gameObject.h"

void GameObject::addComponent(Component * component){
    this->components.push_back(component);
}

void GameObject::update(){
    for(Component *component : components){
        component->update();
    }
}

void GameObject::fixedUpdate(){
    for(Component *component : components){
        component->fixedUpdate();
    }
}

void GameObject::render(){
    for(Component *component : components){
        component->render();
    }
}