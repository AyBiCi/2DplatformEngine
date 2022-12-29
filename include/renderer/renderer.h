#ifndef RENDERER_H
#define RENDERER_H
#include <SDL2/SDL.h>
#include "logging/logger.h"
#include "entity/transform.h"
#include "renderer/textures/texture.h"
#include "renderer/textures/texturesLoader.h"

class Renderer{
    SDL_Window * window;
    SDL_Renderer * renderer;
    TexturesLoader texturesLoader;
    Logger logger;
    int resX=1024, resY=768;
public:
    Renderer();
    bool isGood();
    SDL_Renderer * getSDLRenderer();

    Texture getTexture(std::string texName);
    void renderTexture(Texture texture, Transform transform);

    void clean();
    void present();
};

#endif