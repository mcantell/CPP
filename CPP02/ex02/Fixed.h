#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed
{
	int					_fixedPointValue;
	static const int	_fractionalBits = 8;

	public:
			/* Constructors */
			Fixed();
			Fixed( const int raw);
			Fixed( const float raw);
			/* Copy contructor */
			Fixed( const Fixed& other );
			/* Operator */
			Fixed& operator=( const Fixed& other );
			/* Destructo */
			~Fixed();
			// Comparison operators
			bool operator>(const Fixed& other) const;
			bool operator<(const Fixed& other) const;
			bool operator>=(const Fixed& other) const;
			bool operator<=(const Fixed& other) const;
			bool operator==(const Fixed& other) const;
			bool operator!=(const Fixed& other) const;

			// Arithmetic operators
			Fixed operator+(const Fixed& other) const;
			Fixed operator-(const Fixed& other) const;
			Fixed operator*(const Fixed& other) const;
			Fixed operator/(const Fixed& other) const;

			// Increment/Decrement operators
			Fixed& operator++();        // Pre-increment
			Fixed operator++(int);      // Post-increment
			Fixed& operator--();        // Pre-decrement
			Fixed operator--(int);      // Post-decrement

			// Min/Max functions
			static Fixed& min(Fixed& a, Fixed& b);
			static const Fixed& min(const Fixed& a, const Fixed& b);
			static Fixed& max(Fixed& a, Fixed& b);
			static const Fixed& max(const Fixed& a, const Fixed& b);
			
			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
			float	toFloat( void ) const;
			int		toInt( void ) const;
};
std::ostream& operator<<(std::ostream &out, const Fixed &f);

#endif
