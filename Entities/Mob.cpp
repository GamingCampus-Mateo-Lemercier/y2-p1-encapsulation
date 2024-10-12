#include "Mob.h"
#include <iostream>



Mob::Mob():
    Entity(),
    Alive(),
    AMovable()
{ LogCreated(); }

Mob::Mob( const float x, const float y, const float maxHealth, const Vector2& direction, const float speed ):
    Entity( x, y ),
    Alive( maxHealth ),
    AMovable( direction, speed )
{ LogCreated(); }

Mob::Mob( const float x, const float y, const float initialHealth, const float maxHealth, const Vector2& direction, const float speed ):
    Entity( x, y ),
    Alive( initialHealth, maxHealth ),
    AMovable( direction, speed )
{ LogCreated(); }

Mob::Mob( const Vector2& position, const float maxHealth, const Vector2& direction, const float speed ):
    Entity( position ),
    Alive( maxHealth ),
    AMovable( direction, speed )
{ LogCreated(); }

Mob::Mob( const Vector2& position, const float initialHealth, const float maxHealth, const Vector2& direction, const float speed ):
    Entity( position ),
    Alive( initialHealth, maxHealth ),
    AMovable( direction, speed )
{ LogCreated(); }



void Mob::TakeDamage( const float damage )
{
    Alive::TakeDamage( damage );
    std::cout << "Mob just took damage" << std::endl;
}



void Mob::Move()
{
    Vector2 movement = m_direction;
    movement *= m_speed;
    m_position += movement;
    std::cout << "Mob moved to " << m_position << std::endl;
}



void Mob::LogCreated() const
{ std::cout << "Mob just created at " << m_position << " with " << m_maxHealth << " life and with direction " << m_direction << std::endl; }