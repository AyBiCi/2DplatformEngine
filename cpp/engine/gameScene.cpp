#include "engine/gameScene.h"

void GameScene::addGameObject(GameObject * gameObject){
    gameObjects.push_back(gameObject);
}

void GameScene::update(){
    for(GameObject * gameObject : gameObjects){
        gameObject->update();
    }
}

void GameScene::fixedUpdate(){
    for(GameObject * gameObject : gameObjects){
        gameObject->fixedUpdate();
    }
}

void GameScene::render(){
    for(GameObject * gameObject : gameObjects){
        gameObject->render();
    }
}