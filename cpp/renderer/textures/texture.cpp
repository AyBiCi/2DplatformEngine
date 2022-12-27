#include "renderer/textures/texture.h"

Texture::Texture(SDL_Texture * texture){
    this->texture = texture;
}

bool Texture::isGood(){
    return this->texture != nullptr;
}