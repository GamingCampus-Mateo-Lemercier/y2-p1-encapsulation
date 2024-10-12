#include "Player.h"
#include <iostream>



Player::Player():
    Entity(),
    Alive(),
    AMovable()
{ LogCreated(); }

Player::Player( const float x, const float y, const float maxHealth, const Vector2& direction, const float speed ):
    Entity( x, y ),
    Alive( maxHealth ),
    AMovable( direction, speed )
{ LogCreated(); }

Player::Player( const float x, const float y, const float initialHealth, const float maxHealth, const Vector2& direction, const float speed ):
    Entity( x, y ),
    Alive( initialHealth, maxHealth ),
    AMovable( direction, speed )
{ LogCreated(); }

Player::Player( const Vector2& position, const float maxHealth, const Vector2& direction, const float speed ):
    Entity( position ),
    Alive( maxHealth ),
    AMovable( direction, speed )
{ LogCreated(); }

Player::Player( const Vector2& position, const float initialHealth, const float maxHealth, const Vector2& direction, const float speed ):
    Entity( position ),
    Alive( initialHealth, maxHealth ),
    AMovable( direction, speed )
{ LogCreated(); }



void Player::TakeDamage( const float damage )
{
    Alive::TakeDamage( damage );
    std::cout << "Player just took damage" << std::endl;
}



void Player::Move()
{
    Vector2 movement = m_direction;
    movement *= m_speed;
    m_position += movement;
    std::cout << "Player moved to " << m_position << std::endl;
}



void Player::Attack( Alive* pTarget )
{
    pTarget->TakeDamage( 10.0f );
    std::cout << "Player just attacked" << std::endl;
}



void Player::LogCreated() const
{ std::cout << "Player just created at " << m_position << " with " << m_maxHealth << " life and with direction " << m_direction << std::endl; }