#pragma once
#include <array>
#include "SFML/Window/Keyboard.hpp"
#include <SFML/Window.hpp>

class Input{

    public:
        void update();
        bool isKeyDown(sf::Keyboard::Key key) const;     
        bool isKeyPressed(sf::Keyboard::Key key) const;  
    
        
    private:

        std::array<bool, sf::Keyboard::KeyCount> current{};
        std::array<bool, sf::Keyboard::KeyCount> previous{};

};




