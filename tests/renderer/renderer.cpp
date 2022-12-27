#include "renderer/renderer.h"

int main(){
    Renderer renderer;

    if(!renderer.isGood()){
        return 1;
    }

    return 0;
}