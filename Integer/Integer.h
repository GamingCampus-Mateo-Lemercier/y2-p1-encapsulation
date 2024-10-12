#ifndef INTEGER_H__
#define INTEGER_H__
#include <iostream>



class Integer
{
public:
    Integer();
    Integer( int value );
    
    [[nodiscard]] Integer operator+( int value ) const;
    [[nodiscard]] Integer operator-( int value ) const;
    [[nodiscard]] Integer operator*( int value ) const;
    [[nodiscard]] Integer operator/( int value ) const;
    [[nodiscard]] Integer operator%( int value ) const;
    
    [[nodiscard]] Integer operator+( Integer other ) const;
    [[nodiscard]] Integer operator-( Integer other ) const;
    [[nodiscard]] Integer operator*( Integer other ) const;
    [[nodiscard]] Integer operator/( Integer other ) const;
    [[nodiscard]] Integer operator%( Integer other ) const;
    
    void operator+=( int value );
    void operator-=( int value );
    void operator*=( int value );
    void operator/=( int value );
    void operator%=( int value );
    
    void operator+=( Integer other );
    void operator-=( Integer other );
    void operator*=( Integer other );
    void operator/=( Integer other );
    void operator%=( Integer other );
    
    void operator-();
    void pow( int exponent );
    
    friend std::ostream& operator<<( std::ostream& os, Integer integer );

protected:
    int m_value;
};



#endif