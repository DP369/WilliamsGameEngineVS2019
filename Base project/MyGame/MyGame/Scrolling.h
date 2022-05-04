#pragma once

#include "Engine/GameEngine.h"


class Scrolling : public GameObject
{
public:
	//Creates our ship.
	Scrolling();

	//Functions overridden from GameObject:
	void draw();
	void update(sf::Time& elapsed);

private:
	sf::Sprite sprite_;
	

};

typedef std::shared_ptr<Scrolling> ScrollingPtr;