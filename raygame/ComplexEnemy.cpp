#include "ComplexEnemy.h"
#include "Player.h"
void ComplexEnemy::start()
{
	Enemy::start();

	//Initialze behaviours
	m_wanderBehaviour = getBehaviour<WanderBehaviour>();
	m_pursueBehaviour = getBehaviour<PursueBehaviour>();
	m_evadeBehaviour = getBehaviour<EvadeBehaviour>();

	//Set target to target given from the base class
	setTarget(Enemy::getTarget());
}

void ComplexEnemy::setTarget(Actor* target)
{
	Enemy::setTarget(target);
	m_pursueBehaviour->setTarget(target);
	m_evadeBehaviour->setTarget(target);
}

void ComplexEnemy::onCollision(Actor* other)
{
	Enemy::onCollision(other);

	Player* player = dynamic_cast<Player*>(other);

	if (player)
	{
		player->takeDamage(getDamage());
		if (player->getHealth() <= 0)
		{
			setTarget(nullptr);
		}
	}
}
