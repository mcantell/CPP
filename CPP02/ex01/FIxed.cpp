#include "Fixed.h"

/* Constructors */
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int raw )
{
	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = raw << _fractionalBits; // Convert the Int in fixed-point
}

Fixed::Fixed( const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(raw * (1 << _fractionalBits)); // Multiply the float by 2^8 and round it
}

/* Copy constructor */
Fixed::Fixed ( const Fixed& other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

/* Assigned operator */
Fixed& Fixed::operator=( const Fixed& other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if ( this != &other )
		this->_fixedPointValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
	return (float)_fixedPointValue / (1 << _fractionalBits); // Here I divide it by 2^8 and render it float
}

int Fixed::toInt(void) const
{
	return _fixedPointValue >> _fractionalBits; // Execute the shift to get the integer
}

// Overload of the insertion operator (<<)
/* The insertion operator (<<):
Allows you to print a fixed object as a floating point number using std::cout.*/
std::ostream& operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat(); // Use toFloat to print the number as float
	return out;
}
