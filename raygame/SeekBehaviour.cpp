#include "SeekBehaviour.h"
#include "Agent.h"
MathLibrary::Vector2 SeekBehaviour::calculateForce(Agent* agent)
{
	//Do seek behaviour
	MathLibrary::Vector2 direction = MathLibrary::Vector2(m_target->getWorldPosition() - agent->getWorldPosition());
	return MathLibrary::Vector2();
}