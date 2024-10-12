#include "World.h"
#include "Vector2.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"



void World::Init()
{
    StaticObject* pStaticObject = new StaticObject( -1.0f, 1.0f );
    BreakableObject* pBreakableObject = new BreakableObject( 1.0f, 1.0f, 1.0f );
    Mob* pMob = new Mob( -1.0f, -1.0f, 20.0f, Vector2( 0.0f, 0.0f ), 1.0f );
    Player* pPlayer = new Player( 1.0f, -1.0f, 10.0f, Vector2( 0.0f, 0.0f ), 1.5f );
    
    m_entities.push_back( pStaticObject );
    m_entities.push_back( pBreakableObject );
    m_entities.push_back( pMob );
    m_entities.push_back( pPlayer );
}

bool World::Step()
{
    BreakableObject* pBreakableObject( nullptr );
    Mob* pMob( nullptr );
    Player* pPlayer( nullptr );
    
    for ( Entity* pEntity : m_entities )
    {
        if ( BreakableObject* pTest = dynamic_cast<BreakableObject*>( pEntity ) )
            pBreakableObject = pTest;
        else
        if ( Mob* pTest = dynamic_cast<Mob*>( pEntity ) )
            pMob = pTest;
        else
        if ( Player* pTest = dynamic_cast<Player*>( pEntity ) )
            pPlayer = pTest;
    }
    
    Vector2 direction;
    
    if ( pMob->GetHealth() > 0.0f )
    {
        // Moving the Mob towards the Breakable Object
        direction = pBreakableObject->GetPosition();
        direction -= pMob->GetPosition();
        direction.Normalize();
        pMob->SetDirection( direction );
        pMob->Move();
        
        // Moving the Player towards the Mob
        direction = pMob->GetPosition();
        direction -= pPlayer->GetPosition();
        direction.Normalize();
        pPlayer->SetDirection( direction );
        pPlayer->Move();
        if ( pPlayer->GetPosition().DistanceToSquared( pMob->GetPosition() ) < 1 )
            pPlayer->Attack( pMob );
        return true;
    }
    
    if ( pBreakableObject->GetHealth() > 0.0f )
    {
        // Moving the Player towards the Breakable Object
        direction = pBreakableObject->GetPosition();
        direction -= pPlayer->GetPosition();
        direction.Normalize();
        pPlayer->SetDirection( direction );
        pPlayer->Move();
        if ( pPlayer->GetPosition().DistanceToSquared( pBreakableObject->GetPosition() ) < 1 )
            pPlayer->Attack( pBreakableObject );
        return true;
    }
    
    std::cout << "Simulation Finished" << std::endl;
    return false;
}