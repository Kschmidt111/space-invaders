#include "Input.h"
#include "SFML/Window/Keyboard.hpp"



void Input::update(){

    previous = current;
    for(int i{}; i < sf::Keyboard::KeyCount; ++i){
        current[i] = sf::Keyboard::isKeyPressed(static_cast<sf::Keyboard::Key>(i));
    }


}

bool Input::isKeyDown(sf::Keyboard::Key key) const {
    return current[static_cast<std::size_t>(key)];
}

bool Input::isKeyPressed(sf::Keyboard::Key key) const {
    return current[static_cast<std::size_t>(key)] && !previous[static_cast<std::size_t>(key)];
}