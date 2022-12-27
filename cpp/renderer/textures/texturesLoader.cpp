#include "renderer/textures/texturesLoader.h"

TexturesLoader::TexturesLoader(SDL_Renderer * renderer, std::string path) : logger("TextureLoader"){
    this->path = path;
    this->renderer = renderer;

    logger.info("Initializing SDL2 IMG...");

    int imgFlags = IMG_INIT_PNG;

    if( !( IMG_Init( imgFlags ) & imgFlags ) )
    {
        logger.error("Initialization of SDL IMG FAILED!!!..." + std::string(SDL_GetError()));
        return;
    }

    logger.info("Initialization of SDL2 IMG worked! Image loading is now enabled.");
}

Texture TexturesLoader::loadTexture(std::string name){
    logger.info("Loading texture "+ name + " from "+path+" ...");

    SDL_Texture* newTexture = nullptr;

    std::string loadPath = path + "/" + name;

    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( loadPath.c_str() );
    if( loadedSurface == nullptr )
    {
        logger.error("Cannot load image "+ loadPath + " SDL_ERROR = " + std::string(SDL_GetError()));
    }
    else
    {
        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( renderer, loadedSurface );
        if( newTexture == nullptr )
        {
            logger.error("Cannot create texture from "+ loadPath + " SDL_ERROR = " + std::string(SDL_GetError()));
        }

        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }

    if(newTexture != nullptr){
        logger.info("Texture "+ name + " from "+path+" loaded successfully!");
    }

    return Texture(newTexture);
}