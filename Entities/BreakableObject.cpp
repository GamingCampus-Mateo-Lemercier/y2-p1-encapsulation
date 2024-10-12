#include "BreakableObject.h"
#include <iostream>



BreakableObject::BreakableObject():
    Entity(),
    Alive()
{ LogCreated(); }

BreakableObject::BreakableObject( const float x, const float y, const float maxHealth ):
    Entity( x, y ),
    Alive( maxHealth )
{ LogCreated(); }

BreakableObject::BreakableObject( const float x, const float y, const float initialHealth, const float maxHealth ):
    Entity( x, y ),
    Alive( initialHealth, maxHealth )
{ LogCreated(); }

BreakableObject::BreakableObject( const Vector2& position, const float maxHealth ):
    Entity( position ),
    Alive( maxHealth )
{ LogCreated(); }

BreakableObject::BreakableObject( const Vector2& position, const float initialHealth, const float maxHealth ):
    Entity( position ),
    Alive( initialHealth, maxHealth )
{ LogCreated(); }



void BreakableObject::TakeDamage( const float damage )
{
    Alive::TakeDamage( damage );
    std::cout << "Breakable Object just cracked" << std::endl;
}



void BreakableObject::LogCreated() const
{ std::cout << "Breakable Object just created at " << m_position << " with " << m_maxHealth << " life" << std::endl; }