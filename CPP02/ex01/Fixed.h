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

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
			float	toFloat( void ) const;
			int		toInt( void ) const;
};
std::ostream& operator<<(std::ostream &out, const Fixed &f);

#endif
