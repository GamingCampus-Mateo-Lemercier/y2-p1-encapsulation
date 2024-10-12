#include "Entity.h"



Entity::Entity():
    m_position( 0.0f, 0.0f )
{}

Entity::Entity( const float x, const float y ):
    m_position( x, y )
{}

Entity::Entity( const Vector2& position ):
    m_position( position )
{}



const Vector2& Entity::GetPosition() const
{ return m_position; }



void Entity::SetPosition( const float x, const float y )
{
    m_position.SetX( x );
    m_position.SetY( y );
}

void Entity::SetPosition( const Vector2& position )
{ m_position = position; }