#ifndef I_ATTACKER_H__
#define I_ATTACKER_H__

class Alive;



class IAttacker
{
public:
    virtual ~IAttacker() = default;
    
    virtual void Attack( Alive* pTarget ) = 0;
};



#endif