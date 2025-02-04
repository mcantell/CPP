#include "Fixed.h"

Fixed::Fixed() : _fixedPointValue(0) {}

Fixed::Fixed( const int raw )
{
	_fixedPointValue = raw << _fractionalBits; // Convert Int in fixed-point
}

Fixed::Fixed( const float raw)
{
	_fixedPointValue = roundf(raw * (1 << _fractionalBits)); // Multiply the float by 2^8 and round it
}

Fixed::Fixed ( const Fixed& other )
{
	*this = other;
}

Fixed& Fixed::operator=( const Fixed& other )
{
	if ( this != &other )
		this->_fixedPointValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {}

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

// Comparison operators
bool Fixed::operator>(const Fixed& other) const
{
	return _fixedPointValue > other._fixedPointValue;
/* Assigned operator */
}

bool Fixed::operator<(const Fixed& other) const
{
	return _fixedPointValue < other._fixedPointValue;
}

bool Fixed::operator>=(const Fixed& other) const
{
	return _fixedPointValue >= other._fixedPointValue;
}

bool Fixed::operator<=(const Fixed& other) const
{
	return _fixedPointValue <= other._fixedPointValue;
}

bool Fixed::operator==(const Fixed& other) const
{
	return _fixedPointValue == other._fixedPointValue;
}

bool Fixed::operator!=(const Fixed& other) const
{
	return _fixedPointValue != other._fixedPointValue;
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

// Increment/Decrement operators

// Pre-increment
Fixed& Fixed::operator++()
{
	_fixedPointValue++;
	return *this;
}

// Post-increment
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	_fixedPointValue++;
	return temp;
}

// Pre-decrement
Fixed& Fixed::operator--()
{
	_fixedPointValue--;
	return *this;
}

// Post-decrement
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	_fixedPointValue--;
	return temp;
}

// Min/Max functions
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	 return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	 return (a > b) ? a : b;
}
