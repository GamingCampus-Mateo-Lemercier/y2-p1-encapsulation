#include "AMovable.h"



AMovable::AMovable():
    m_direction( 0.0f, 0.0f ),
    m_speed( 0.0f )
{}

AMovable::AMovable( const Vector2& direction, const float speed ):
    m_direction( direction ),
    m_speed( speed )
{}



void AMovable::SetDirection( const Vector2& direction )
{ m_direction = direction; }

void AMovable::SetSpeed( const float speed )
{ m_speed = speed; }