#ifndef TEXTURE_H
#define TEXTURE_H

#include <SDL2/SDL.h>

class Texture{
    SDL_Texture * texture;
public:
    Texture(SDL_Texture * texture);
    bool isGood();
};

#endif