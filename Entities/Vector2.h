#ifndef VECTOR2_H__
#define VECTOR2_H__



class Vector2
{
public:
    Vector2();
    explicit Vector2( float x, float y );
    
    [[nodiscard]] float GetX() const;
    [[nodiscard]] float GetY() const;
    
    void SetX( float x );
    void SetY( float y );

protected:
    float m_x;
    float m_y;
};



#endif