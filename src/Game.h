#pragma once
#include <SFML/Graphics.hpp>

class Game{
    public:
        bool init();
        void run();
        void clean();

    private:
        sf::RenderWindow window;
        bool running = false;
};