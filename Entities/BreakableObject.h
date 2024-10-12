#ifndef BREAKABLE_OBJECT_H__
#define BREAKABLE_OBJECT_H__

#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"



class BreakableObject : public Entity, public Alive
{
public:
    BreakableObject();
    explicit BreakableObject( float x, float y, float maxHealth );
    explicit BreakableObject( float x, float y, float initialHealth, float maxHealth );
    explicit BreakableObject( const Vector2& position, float maxHealth );
    explicit BreakableObject( const Vector2& position, float initialHealth, float maxHealth );
    
    void TakeDamage( float damage ) override;

protected:
    void LogCreated() const;
};



#endif