#include "config.h"

// defition of extern variables
bool fullscreen = false;
sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window", sf::Style::Titlebar | sf::Style::Close);
unsigned int sound = 100;


int main()
{
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear();
        window.display();
    }
    return 0;
}
