#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	int					_fixedPointValue;
	static const int	_fractionalBits = 8;

	public:
			/* Constructor */
			Fixed();
			/* Copy contructor */
			Fixed( const Fixed& other );
			/* Operator */
			Fixed& operator=( const Fixed& other );
			/* Destructor */
			~Fixed();

			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
};

#endif
