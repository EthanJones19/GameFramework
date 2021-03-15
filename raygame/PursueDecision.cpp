#include "PursueDecision.h"
#include "ComplexEnemy.h"

void PursueDecision::makeDecision(Agent* agent, float deltaTime)
{
	ComplexEnemy* enemy = dynamic_cast<ComplexEnemy*>(agent);

	if (enemy)
	{
		enemy->getPursue()->setsetEnabled(true);
		enemy->getWander()->setsetEnabled(false);
		enemy->getEvade()->setsetEnabled(false);
	}
}
