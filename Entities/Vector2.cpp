#include "Vector2.h"
#include <cmath>



Vector2::Vector2():
    m_x( 0.0f ),
    m_y( 0.0f )
{}

Vector2::Vector2( const float x, const float y ):
    m_x( x ),
    m_y( y )
{}



float Vector2::GetX() const
{ return m_x; }

float Vector2::GetY() const
{ return m_y; }



void Vector2::SetX( const float x )
{ m_x = x; }

void Vector2::SetY( const float y )
{ m_y = y; }



float Vector2::GetNorm() const
{ return sqrtf( m_x * m_x + m_y * m_y ); }

float Vector2::GetNormSquared() const
{ return m_x * m_x + m_y * m_y; }

void Vector2::Normalize()
{
    float norm = GetNorm();
    if ( norm == 0.0f ) return;
    float invNorm = 1.0f / norm;
    m_x *= invNorm;
    m_y *= invNorm;
}



float Vector2::DistanceToSquared( const Vector2& other ) const
{ return ( other - *this ).GetNormSquared(); }



Vector2 Vector2::operator-( const Vector2& other ) const
{ return Vector2( m_x - other.m_x, m_y - other.m_y ); }



void Vector2::operator+=( const Vector2& other )
{
    m_x += other.m_x;
    m_y += other.m_y;
}

void Vector2::operator-=( const Vector2& other )
{
    m_x -= other.m_x;
    m_y -= other.m_y;
}

void Vector2::operator*=( const float scalar )
{
    m_x *= scalar;
    m_y *= scalar;
}



std::ostream& operator<<( std::ostream& os, const Vector2& vector )
{
    os << "x = " << vector.m_x << " and y = " << vector.m_y;
    return os;
}