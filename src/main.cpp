//cmake --build --preset debug
//cmake --preset default     
//.\build\Debug\space_invaders.exe

#include "Game.h"
#include <iostream>


int main()
{

    Game game;
    if(!game.init()){
        std::cout << "error running game" << std::endl;
        return 1;
    }

    game.run();
    game.clean();
    return 0;
}
