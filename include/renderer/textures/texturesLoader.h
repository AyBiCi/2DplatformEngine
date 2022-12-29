#ifndef TEXTURES_LOADER_H
#define TEXTURES_LOADER_H
#include <string>
#include <SDL2/SDL_image.h>
#include "renderer/textures/texture.h"
#include "logging/logger.h"

class TexturesLoader {
    std::string path;
    Logger logger;
    SDL_Renderer * renderer;
public:
    TexturesLoader();
    TexturesLoader(SDL_Renderer * renderer, std::string assetsPath);

    void init(SDL_Renderer * renderer, std::string assetsPath);
    Texture loadTexture(std::string textureName);
};

#endif