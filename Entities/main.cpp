#include <iostream>
#include "Vector2.h"
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"



void Exercice10()
{
    StaticObject myStaticObject( -5.0f, 5.0f );
    myStaticObject.SetPosition( -6.0f, 6.0f );
    std::cout << "Static Object's new position is " << myStaticObject.GetPosition() << std::endl;
    
    std::cout << std::endl;
    
    BreakableObject myBreakableObject( 5.0f, 5.0f, 10.0f );
    myBreakableObject.SetPosition( 6.0f, 6.0f );
    std::cout << "Breakable Object's new position is " << myBreakableObject.GetPosition() << std::endl;
    myBreakableObject.TakeDamage( 10.0f );
    std::cout << "Breakable Object's current health is " << myBreakableObject.GetHealth() << std::endl;
    std::cout << "Breakable Object's maxHealth is " << myBreakableObject.GetMaxHealth() << std::endl;
    
    std::cout << std::endl;
    
    Mob myMob( -5.0f, -5.0f, 80.0f, Vector2( 1.0f, 0.0f ), 1.0f );
    myMob.SetPosition( -6.0f, -6.0f );
    std::cout << "Mob's new position is " << myMob.GetPosition() << std::endl;
    myMob.TakeDamage( 20.0f );
    std::cout << "Mob's current health is " << myMob.GetHealth() << std::endl;
    std::cout << "Mob's maxHealth is " << myMob.GetMaxHealth() << std::endl;
    myMob.Move();
    
    std::cout << std::endl;
    
    Player myPlayer( 5.0f, -5.0f, 250.0f, Vector2( -1.0f, 0.0f ), 1.5f );
    myPlayer.SetPosition( 6.0f, -6.0f );
    std::cout << "Player's new position is " << myPlayer.GetPosition() << std::endl;
    myPlayer.TakeDamage( 50.0f );
    std::cout << "Player's current health is " << myPlayer.GetHealth() << std::endl;
    std::cout << "Player's maxHealth is " << myPlayer.GetMaxHealth() << std::endl;
    myPlayer.Move();
    myPlayer.Attack( &myMob );
    std::cout << "Mob's current health is " << myMob.GetHealth() << std::endl;
    
    std::cout << std::endl;
}



int main()
{
    Exercice10();
    return 0;
}