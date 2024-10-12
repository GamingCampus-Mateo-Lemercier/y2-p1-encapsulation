#ifndef STATIC_OBJECT_H__
#define STATIC_OBJECT_H__

#include "Vector2.h"
#include "Entity.h"



class StaticObject : public Entity
{
public:
    StaticObject();
    explicit StaticObject( float x, float y );
    explicit StaticObject( const Vector2& position );

protected:
    void LogCreated() const;
};



#endif