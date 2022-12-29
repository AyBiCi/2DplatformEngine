#ifndef ENGINE_H
#define ENGINE_H

#include "renderer/renderer.h"
#include "engine/gameScene.h"
#include "event/eventHandler.h"

namespace Engine{
    void setScene(GameScene* gameScene);

    Renderer * getRenderer();

    void start();
}

#endif