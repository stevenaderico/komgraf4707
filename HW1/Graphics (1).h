
int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "DDA Line Drawing");

    sf::Vertex line[] = {
        sf::Vertex(sf::Vector2f(100, 100)),
        sf::Vertex(sf::Vector2f(500, 500))
    };

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(line, 2, sf::Lines);
        window.display();
    }

    return 0;
}

