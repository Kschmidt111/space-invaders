cmake_minimum_required(VERSION 3.20)
project(SpaceInvaders LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(space_invaders
    src/main.cpp
)
