#pragma once

#include "Engine/GameEngine.h"

class Explosion : public AnimatedSprite
{
public:
	//Creates our explosion.
	Explosion(sf::Vector2f pos);

	//Functions overriden from GameObject:
	void update(sf::Time& elapsed);

private: 
	void SetUpExplosionAnimation();

	sf::Sound boom_;

};

typedef std::shared_ptr<Explosion> ExplosionPtr;