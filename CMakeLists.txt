cmake_minimum_required(VERSION 3.10)
project(2DplatformEngine VERSION 0.1)

find_package(SDL2 REQUIRED)
set(sources
    cpp/renderer/textures/texture.cpp
    cpp/renderer/textures/texturesLoader.cpp
    cpp/renderer/renderer.cpp
    cpp/logging/logger.cpp
    cpp/entity/component.cpp
    cpp/entity/gameObject.cpp
    cpp/entity/transform.cpp
    cpp/engine/engine.cpp
    cpp/engine/gameScene.cpp
    cpp/event/eventHandler.cpp
    )

set(libs
    ${SDL2_LIBRARIES}
    SDL2_image
    )

include_directories(${SDL2_INCLUDE_DIRS})

# add_executable(2DplatformEngine 
#     cpp/main.cpp)
# target_link_libraries(2DplatformEngine ${SDL2_LIBRARIES})

# target_include_directories(2DplatformEngine PUBLIC "${PROJECT_SOURCE_DIR}/include")

enable_testing()

add_executable(texturesLoaderTest tests/renderer/textures/texturesLoader.cpp ${sources})
target_link_libraries(texturesLoaderTest ${libs})
target_include_directories(texturesLoaderTest PUBLIC "${PROJECT_SOURCE_DIR}/include")
add_test(TexturesLoaderTest texturesLoaderTest)

add_executable(rendererTest tests/renderer/renderer.cpp ${sources})
target_link_libraries(rendererTest ${libs})
target_include_directories(rendererTest PUBLIC "${PROJECT_SOURCE_DIR}/include")
add_test(RendererTest rendererTest)

add_executable(loggerTest tests/logging/logger.cpp ${sources})
target_link_libraries(loggerTest ${libs})
target_include_directories(loggerTest PUBLIC "${PROJECT_SOURCE_DIR}/include")
add_test(LoggerTest loggerTest)

add_executable(gameObjectTest tests/entity/gameObject.cpp ${sources})
target_link_libraries(gameObjectTest ${libs})
target_include_directories(gameObjectTest PUBLIC "${PROJECT_SOURCE_DIR}/include")
add_test(GameObjectTest gameObjectTest)

add_executable(renderableTest tests/renderer/renderable.cpp ${sources})
target_link_libraries(renderableTest ${libs})
target_include_directories(renderableTest PUBLIC "${PROJECT_SOURCE_DIR}/include")
add_test(RenderableTest renderableTest)