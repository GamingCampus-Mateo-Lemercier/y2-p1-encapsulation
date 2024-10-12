#include "StaticObject.h"
#include <iostream>



StaticObject::StaticObject():
    Entity()
{ LogCreated(); }

StaticObject::StaticObject( const float x, const float y ):
    Entity( x, y )
{ LogCreated(); }

StaticObject::StaticObject( const Vector2& position ):
    Entity( position )
{ LogCreated(); }



void StaticObject::LogCreated() const
{ std::cout << "Static Object just created at " << m_position << std::endl; }