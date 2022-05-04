#include "Scrolling.h"
#include "ScrollSpawner.h"

const float SPEED = 0.20f;

Scrolling::Scrolling(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/explosion01.png"));
	sprite_.setPosition(pos);

}

void Scrolling::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}

void Scrolling::update(sf::Time& elapsed)
{
	int msElapseds = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();
	sprite_.setPosition(sf::Vector2f(pos.x - SPEED * msElapseds, pos.y));
	
}
