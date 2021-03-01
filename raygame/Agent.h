#pragma once
#include "Actor.h"
#include <vector>

class Behaviour;

class Agent : public Actor
{
public:
    Agent();
    /// <param name="x">Position on the x axis</param>
    /// <param name="y">Position on the y axis</param>
    /// <param name="icon">The symbol that will appear when drawn</param>
    /// <param name="maxForce">The largest the magintude of the force vector can be</param>
    Agent(float x, float y, float collisionRadius, char icon, float maxSpeed, float maxForce);

    /// <param name="x">Position on the x axis</param>
    /// <param name="y">Position on the y axis</param>
    /// <param name="icon">The symbol that will appear when drawn</param>
    Agent(float x, float y, float collisionRadius, Sprite* sprite, float maxSpeed, float maxForce);

    /// <param name="x">Position on the x axis</param>
    /// <param name="y">Position on the y axis</param>
    /// <param name="icon">The symbol that will appear when drawn</param>
    Agent(float x, float y, float collisionRadius, const char* spriteFilePath, float maxSpeed, float maxForce);

    void update(float deltatime);

    float getMaxForce() { return m_maxForce; }
    void setMacForce(float maxForce) { m_maxForce = maxForce; }

    //Add the given force to the total force that is being applied
    void addForce(MathLibrary::Vector2 force);
private:
	MathLibrary::Vector2 m_force;
	float m_maxForce;
	std::vector<Behaviour*> m_behaviours;
};

