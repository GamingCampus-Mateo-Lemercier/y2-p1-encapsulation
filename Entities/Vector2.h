#ifndef VECTOR2_H__
#define VECTOR2_H__

#include <iostream>



class Vector2
{
public:
    Vector2();
    explicit Vector2( float x, float y );
    
    [[nodiscard]] float GetX() const;
    [[nodiscard]] float GetY() const;
    
    void SetX( float x );
    void SetY( float y );
    
    void operator+=( const Vector2& other );
    void operator*=( float scalar );
    
    friend std::ostream& operator<<( std::ostream& os, const Vector2& vector );

protected:
    float m_x;
    float m_y;
};



#endif