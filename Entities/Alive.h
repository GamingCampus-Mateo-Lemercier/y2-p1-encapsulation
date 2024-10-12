#ifndef ALIVE_H__
#define ALIVE_H__



class Alive
{
public:
    Alive();
    explicit Alive( float maxHealth );
    explicit Alive( float initialHealth, float maxHealth );
    virtual ~Alive() = default;
    
    [[nodiscard]] virtual float GetHealth() const;
    [[nodiscard]] virtual float GetMaxHealth() const;
    
    virtual void TakeDamage( float damage );

protected:
    float m_health;
    float m_maxHealth;
};



#endif