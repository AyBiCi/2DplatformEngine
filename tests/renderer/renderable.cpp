#include "engine/engine.h"
#include "renderer/renderable.h"
#include "entity/gameObject.h"
#include "entity/transform.h"

class RenderableTest : public Renderable, public GameObject{
    public:
    virtual void render(){
        Engine::renderer.renderTexture("blok.png", Transform());
    }
};

int main(){
    RenderableTest renderableTest;
}