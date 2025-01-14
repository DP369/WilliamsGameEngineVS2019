#pragma once



#include "Engine/GameEngine.h"
#include "Scrolling.h"

class ScrollSpawner : public GameObject
{
public:
	void update(sf::Time& elapsed);

private:
	int timers_ = 0;
};

typedef std::shared_ptr<ScrollSpawner> ScrollSpawnerPtr;