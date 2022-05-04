#include "ScrollSpawner.h"

const int SPAWN_DELAY = 100;

void ScrollSpawner::update(sf::Time& elapsed)
{
	int msElapseds = elapsed.asMilliseconds();
	timers_ -= msElapseds;

	//If our timer has elapsed, reset it and spawn a meteor.

	if (timers_ <= 0)
	{
		timers_ = SPAWN_DELAY;

		sf::Vector2u size = GAME.getRenderWindow().getSize();

		//Spawn the meteor off the right side of the screen.
		// We're assuming the meteor isn't more than 100 pixels wide.
		float scrollx = (float)(size.x + 100);

		//Spawn the meteor somehwere along the height of window, randomly.
		float scrolly = (float)(rand() % size.y);

		//Create a meteor and add it to the scene.
		ScrollingPtr scrolling = std::make_shared<Scrolling>(sf::Vector2f(scrollx, scrolly));
		GAME.getCurrentScene().addGameObject(scrolling);
	}
}