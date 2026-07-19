#include "Game.h"
#include "SFML/Window/Event.hpp"
#include "SFML/Window/Keyboard.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


bool Game::init(){

    // sf::Window window;
    // window.create(sf::VideoMode({800, 600}), "Space Invaders Window");

    // running = true;
    // return true;
    return true;
}

void Game::run(){

    
    window.create(sf::VideoMode({1600, 1200}), "Space Invaders Window");

    while(window.isOpen()){

        while(const std::optional event = window.pollEvent()){
            if(event->is<sf::Event::Closed>()){
                window.close();
            }

            else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>()) {
                if(keyPressed->scancode == sf::Keyboard::Scancode::Escape){
                    window.close();
                }
            
            }
        }

        clean();
        window.display();


    }
}


void Game::clean(){
    window.clear(sf::Color::Black);
}