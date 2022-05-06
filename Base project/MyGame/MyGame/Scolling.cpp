#include "Scrolling.h"
#include "ScrollSpawner.h"

const float SPEED = 1.2f;

Scrolling::Scrolling(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/explosion01.png"));
	sprite_.setPosition(pos);
	assignTag("scrolling");
	

}

void Scrolling::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}

void Scrolling::update(sf::Time& elapsed)
{
	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();
	sprite_.setPosition(sf::Vector2f(pos.x - SPEED * msElapsed, pos.y));
		
}
