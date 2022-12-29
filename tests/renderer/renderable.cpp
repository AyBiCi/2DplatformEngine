#include "engine/engine.h"
#include "entity/gameObject.h"
#include "entity/transform.h"
#include "renderer/textures/texture.h"
#include "engine/gameScene.h"

class RenderableTest : public Component{
    Texture tex = Engine::getRenderer()->getTexture("blok.png");
public:
    RenderableTest() : Component("TestComponent"){}
    virtual void render(){
        Engine::getRenderer()->renderTexture(tex, Transform());
    }
};

int main(){
    GameScene gameScene;

    RenderableTest renderableTest;
    GameObject testObject;
    testObject.addComponent(&renderableTest);

    gameScene.addGameObject(&testObject);

    Engine::setScene(&gameScene);

    Engine::start();
}