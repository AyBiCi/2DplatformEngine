#include <iostream>
#include "renderer/textures/texturesLoader.h"
#include "renderer/renderer.h"

int main(){
    Renderer renderer;
    TexturesLoader loader(renderer.getSDLRenderer(), "./assets/textures");
    Texture texture = loader.loadTexture("blok.png");

    if(!texture.isGood()) {
        return 1;
    }

    return 0;
}