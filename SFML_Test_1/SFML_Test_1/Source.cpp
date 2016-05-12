/* #define SFML_STATIC

#include <SFML/Graphics.hpp>
#include <iostream>



int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "Shapes!");
	sf::CircleShape triangle(300,3);
	sf::CircleShape  square(50,4);

	triangle.setFillColor(sf::Color::Green);
	square.setOutlineThickness(2);
	square.setOutlineColor(sf::Color::Red);



	sf::Texture texture;
	if (!texture.loadFromFile("Ball_Texture.jpg"))
	{
		std::cout << "not loading.";
	}
	square.setTexture(&texture);
	texture.setSmooth(true);

	square.setOrigin(50,50);
	square.setPosition(250, 250);


	sf::View view;
	view.setCenter(250,250);
	window.setView(view);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(triangle);
		window.draw(square);
		window.display();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			view.move(10.0f, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			view.move(-10.0f, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			view.move(0, 10.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			view.move(0, -10.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
		{
			square.rotate(0.1);
		}

	}

	return 0;
}
*/
