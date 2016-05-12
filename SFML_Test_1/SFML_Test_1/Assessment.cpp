#define SFML_STATIC
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main()
{
	// create render window by size and name
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	// create circle shape class, called 'shape', with radius 100 units
	
	cout << "have you changed5";

	// this is an overloaded constructor
	// one that doesn't use a float and one that does
	sf::CircleShape shape2;
	shape2.setRadius(50.f);

	sf::Clock clock;
	float elapsedAsfloat = 0;

	int fireFrameCount = 0;

	sf::Texture fire;
	if (!fire.loadFromFile("Fire.png")) {
		//error

	}

	sf::Sprite fireSprite;
	fireSprite.setTexture(fire);
	fireSprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
	fireSprite.setPosition(sf::Vector2f(0,0));
	fireSprite.setScale(2, 2);

	// this is the core rendering loop (same as update)
	while (window.isOpen())
	{
		// event call: this code is always here to capture the event of the window closing
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		// all our input
		// our game code/changes/functionality/etc.
		// then draw it all

		sf::Time elapsed1 = clock.getElapsedTime();
		cout << elapsed1.asSeconds() << endl;
		elapsedAsfloat = elapsed1.asSeconds();

		if (elapsedAsfloat > 0.2f) {

			cout << "Time is now higher than 2";

			if (fireFrameCount < 3)
			{
				fireFrameCount++;
			}
			else
			{
				fireFrameCount = 0;
			}

			fireSprite.setTextureRect(sf::IntRect(32 * fireFrameCount, 0, 32, 32));

			clock.restart();
		}




		// black out the render window
		window.clear();
		// draw the shape
		window.draw(fireSprite);


		// display it
		window.display();

	}

	return 0;
}