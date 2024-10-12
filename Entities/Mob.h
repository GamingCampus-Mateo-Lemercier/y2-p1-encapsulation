#ifndef MOB_H__
#define MOB_H__

#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"



class Mob : public Entity, public Alive, public AMovable
{
public:
    Mob();
    explicit Mob( float x, float y, float maxHealth, const Vector2& direction, float speed );
    explicit Mob( float x, float y, float initialHealth, float maxHealth, const Vector2& direction, float speed );
    explicit Mob( const Vector2& position, float maxHealth, const Vector2& direction, float speed );
    explicit Mob( const Vector2& position, float initialHealth, float maxHealth, const Vector2& direction, float speed );
    
    void TakeDamage( float damage ) override;
    
    void Move() override;

protected:
    void LogCreated() const;
};



#endif