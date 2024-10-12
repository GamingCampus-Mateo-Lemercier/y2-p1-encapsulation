#ifndef A_MOVABLE_H__
#define A_MOVABLE_H__

#include "Vector2.h"



class AMovable
{
public:
    AMovable();
    explicit AMovable( const Vector2& direction, float speed );
    virtual ~AMovable() = default;
    
    virtual void SetDirection( const Vector2& direction );
    virtual void SetSpeed( float speed );
    
    virtual void Move() = 0;

protected:
    Vector2 m_direction;
    float m_speed;
};



#endif