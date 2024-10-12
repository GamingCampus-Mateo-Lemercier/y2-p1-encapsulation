#ifndef ENTITY_H__
#define ENTITY_H__

#include "Vector2.h"



class Entity
{
public:
    Entity();
    explicit Entity( float x, float y );
    explicit Entity( const Vector2& position );
    virtual ~Entity() = default;
    
    [[nodiscard]] virtual const Vector2& GetPosition() const;
    
    virtual void SetPosition( float x, float y );
    virtual void SetPosition( const Vector2& position );

protected:
    Vector2 m_position;
};



#endif