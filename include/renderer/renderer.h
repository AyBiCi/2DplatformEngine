#ifndef RENDERER_H
#define RENDERER_H
#include <SDL2/SDL.h>
#include "logging/logger.h"
#include "entity/transform.h"

class Renderer{
    SDL_Window * window;
    SDL_Renderer * renderer;
    Logger logger;
    int resX=1024, resY=768;
public:
    Renderer();
    bool isGood();
    SDL_Renderer * getSDLRenderer();

    void renderTexture(std::string texName, Transform transform);
};

#endif