#include "renderer/renderer.h"

Renderer::Renderer() : logger("Renderer") {
    logger.info("Initialization of SDL2 subsystems...");

    if(SDL_Init(SDL_INIT_EVERYTHING)!=0){
        logger.error("Initialization of SDL2 went bad!!! SDL ERROR = "+ std::string(SDL_GetError()));
        return;
    }

    logger.info("SDL2 initialization completed successfully!");

    logger.info("Creating SDL2 window...");

    window = SDL_CreateWindow( "Game", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, resX, resY, SDL_WINDOW_SHOWN );

    if(window == nullptr)
    {
        logger.error("Creation of SDL2 window went bad!!! SDL ERROR = "+ std::string(SDL_GetError()));
        return;
    }

    logger.info("SDL2 window created successfully!");

    logger.info("Creating SDL2 renderer...");

    renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED );

    if(renderer == nullptr)
    {
        logger.error("Creation of SDL2 renderer went bad!!! SDL ERROR = "+ std::string(SDL_GetError()));
        return;
    }

    logger.info("SDL2 renderer created successfully!");

    logger.info("Rendering is now enabled!");

    texturesLoader.init(renderer, "./assets/textures");
}

bool Renderer::isGood(){
    return window != nullptr && renderer != nullptr;
}

SDL_Renderer * Renderer::getSDLRenderer(){
    return renderer;
}

void Renderer::renderTexture(Texture texture, Transform transform){
    SDL_RenderCopy(renderer,
                   texture.getSDLTexture(),
                   NULL,
                   NULL);
}

Texture Renderer::getTexture(std::string textureName){
    return texturesLoader.loadTexture(textureName);
}

void Renderer::clean(){
    SDL_RenderClear(renderer);
}

void Renderer::present(){
    SDL_RenderPresent(renderer);
}