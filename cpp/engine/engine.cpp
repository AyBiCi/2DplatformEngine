#include "engine/engine.h"

Renderer _renderer;
GameScene * _gameScene;
EventHandler _eventHandler;

void Engine::setScene(GameScene * gameScene){
    _gameScene = gameScene;
}

Renderer* Engine::getRenderer(){
    return &_renderer;
}

void Engine::start(){
    while(true){
        _eventHandler.handleEvents();
        _gameScene->update();
        _renderer.clean();
        _gameScene->render();
        _renderer.present();
        _gameScene->fixedUpdate();
    }
}