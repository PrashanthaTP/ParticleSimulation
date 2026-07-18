#include <SFML/Graphics.hpp>
#include <optional>

int main() {
    sf::RenderWindow window(sf::VideoMode({640, 320}),
                            "SFML Particle Simulation");
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    sf::Clock clock;

    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }

            if (const auto *mouseBtn =
                    event->getIf<sf::Event::MouseButtonPressed>()) {
                if (mouseBtn->button == sf::Mouse::Button::Left) {
                }
            }
        }
		sf::Time elapsed = clock.restart();

		window.clear();
		window.display();
    }
}
