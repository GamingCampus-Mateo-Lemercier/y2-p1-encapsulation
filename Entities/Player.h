#ifndef PLAYER_H__
#define PLAYER_H__

#include "Vector2.h"
#include "Entity.h"
#include "ALive.h"
#include "AMovable.h"
#include "IAttacker.h"



class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:
    Player();
    explicit Player( float x, float y, float maxHealth, const Vector2& direction, float speed );
    explicit Player( float x, float y, float initialHealth, float maxHealth, const Vector2& direction, float speed );
    explicit Player( const Vector2& position, float maxHealth, const Vector2& direction, float speed );
    explicit Player( const Vector2& position, float initialHealth, float maxHealth, const Vector2& direction, float speed );
    
    void TakeDamage( float damage ) override;
    
    void Move() override;
    
    void Attack( Alive* pTarget ) override;

protected:
    void LogCreated() const;
};



#endif