#include "logging/logger.h"

int main(){
    Logger logger("TestLogger");
    logger.info("Info message");
    logger.warn("Warning info");
    logger.error("Error message");
}