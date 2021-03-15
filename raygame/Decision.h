#pragma once


class Agent;

///<summary>
///Abstruct class for a all decisions
///</summary>
class Decision
{
public:
	virtual void makeDecision(Agent* agent, float deltaTime) = 0;
};