#include "entity/gameObject.h"
#include "entity/component.h"
#include <iostream>

int u = 0, i = 0, o = 0;

class TestComponent : public Component{
public:
    TestComponent() : Component("TestComponent"){}

    virtual void update(){
        u = 1;
    }

    virtual void fixedUpdate(){
        i = 1;
    }

    virtual void render(){
        o = 1;
    }
};

int main(){
    GameObject testObject;
    TestComponent testComponent;
    testObject.addComponent(&testComponent);
    testObject.update();
    testObject.fixedUpdate();
    testObject.render();

    if(u != 1){
        std::cout<<"Update function doesn't work!"<<std::endl;
        return 1;
    }
    if(i != 1){
        std::cout<<"FixedUpdate function doesn't work!"<<std::endl;
        return 2;
    }
    if(o != 1){
        std::cout<<"Render function doesn't work!"<<std::endl;
        return 3;
    }
    return 0;
}