#include "ScrollingBackground.h"
#include "GameScene.h"

const float SPEED = 0.01f;

ScrollingBackground::ScrollingBackground(sf::Vector2f pos)
{
	sprite_.setTexture(GAME.getTexture("Resources/explosion01.png"));
	sprite_.setPosition(pos);
}

void ScrollingBackground::draw()
{
	GAME.getRenderWindow().draw(sprite_);
}

void ScrollingBackground::update(sf::Time& elapsed)
{
	int msElapsed = elapsed.asMilliseconds();
	sf::Vector2f pos = sprite_.getPosition();
}