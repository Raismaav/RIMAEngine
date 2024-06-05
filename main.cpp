#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "RIMA Engine");
    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color::Green);
    sf::CircleShape shape2(10);
    shape2.setFillColor(sf::Color::Red);
    sf::CircleShape shape3(5);
    shape2.setFillColor(sf::Color::Blue);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(shape2);
        window.draw(shape3);
        window.display();
    }

    return 0;
}
