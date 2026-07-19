cmake_minimum_required(VERSION 3.20)
project(SpaceInvaders LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML COMPONENTS System Window Graphics Audio CONFIG REQUIRED)

add_executable(space_invaders
    src/main.cpp
    src/Game.cpp
    src/Input.cpp
)

target_link_libraries(space_invaders PRIVATE
    SFML::System
    SFML::Window
    SFML::Graphics
    SFML::Audio
)
