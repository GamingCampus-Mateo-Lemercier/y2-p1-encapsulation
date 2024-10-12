#include "Alive.h"



Alive::Alive():
    m_health( 100.0f ),
    m_maxHealth( 100.0f )
{}

Alive::Alive( const float maxHealth ):
    m_health( maxHealth ),
    m_maxHealth( maxHealth )
{}

Alive::Alive( const float health, const float maxHealth ):
    m_health( health ),
    m_maxHealth( maxHealth )
{}



float Alive::GetHealth() const
{ return m_health; }

float Alive::GetMaxHealth() const
{ return m_maxHealth; }



void Alive::TakeDamage( const float damage )
{
    if ( m_health <= 0.0f ) return;
    m_health -= damage;
    if ( m_health < 0.0f )
        m_health = 0.0f;
}