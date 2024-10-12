#include "Integer.h"
#include <stdexcept>



Integer::Integer():
    m_value( 0 )
{}

Integer::Integer( const int value ):
    m_value( value )
{}



Integer Integer::operator+( const int value ) const
{ return { m_value + value }; }

Integer Integer::operator-( const int value ) const
{ return { m_value - value }; }

Integer Integer::operator*( const int value ) const
{ return { m_value * value }; }

Integer Integer::operator/( const int value ) const
{
    if ( value == 0 ) throw std::invalid_argument( "can't divide by 0" );
    return { m_value / value };
}

Integer Integer::operator%( const int value ) const
{ return { m_value % value }; }



Integer Integer::operator+( const Integer other ) const
{ return { m_value + other.m_value }; }

Integer Integer::operator-( const Integer other ) const
{ return { m_value - other.m_value }; }

Integer Integer::operator*( const Integer other ) const
{ return { m_value * other.m_value }; }

Integer Integer::operator/( const Integer other ) const
{
    if ( other.m_value == 0 ) throw std::invalid_argument( "can't divide by 0" );
    return { m_value / other.m_value };
}

Integer Integer::operator%( const Integer other ) const
{ return { m_value % other.m_value }; }



void Integer::operator+=( const int value )
{ m_value += value; }

void Integer::operator-=( const int value )
{ m_value -= value; }

void Integer::operator*=( const int value )
{ m_value *= value; }

void Integer::operator/=( const int value )
{
    if ( value == 0 ) throw std::invalid_argument( "can't divide by 0" );
    m_value /= value;
}

void Integer::operator%=( const int value )
{ m_value %= value; }



void Integer::operator+=( const Integer other )
{ m_value += other.m_value; }

void Integer::operator-=( const Integer other )
{ m_value -= other.m_value; }

void Integer::operator*=( const Integer other )
{ m_value *= other.m_value; }

void Integer::operator/=( const Integer other )
{
    if ( other.m_value == 0 ) throw std::invalid_argument( "can't divide by 0" );
    m_value /= other.m_value;
}

void Integer::operator%=( const Integer other )
{ m_value %= other.m_value; }



void Integer::operator-()
{ m_value = -m_value; }

void Integer::pow( const int exponent )
{
    if ( m_value == 0 && exponent <= 0 ) throw std::invalid_argument( "can't have a negative or null power of 0" );
    if ( exponent < 0 )
    {
        if ( m_value != 1 )
            m_value = 0;
        return; // because an integer can't have decimal values, a negative exponent will result in 0 except if the value is one (1^n = 1)
    }
    int result = 1;
    for ( int i = 0; i < exponent; i++ )
        result *= m_value;
    m_value = result;
}



std::ostream& operator<<( std::ostream& os, const Integer integer )
{
    os << integer.m_value;
    return os;
}