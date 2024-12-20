#include "Fixed.h"

/* Constructors */
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int raw )
{
	std::cout << "Integer constructor called" << std::endl;
	_fixedPointValue = raw << _fractionalBits; // Converte l'intero in fixed-point
}

Fixed::Fixed( const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(raw * (1 << _fractionalBits)); // Moltiplica il float per 2^8 e lo arrotonda
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
	return (float)_fixedPointValue / (1 << _fractionalBits); // Qui lo divido per 2^8 e lo rendo float
}

int Fixed::toInt(void) const
{
	return _fixedPointValue >> _fractionalBits; // Esegue lo shift per ottenere l'intero
}

// Overload dell'operatore di inserimento (<<)
/* Operatore di inserimento (<<):
Permette di stampare un oggetto Fixed come un numero a virgola mobile utilizzando std::cout.*/
std::ostream& operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat(); // Utilizza toFloat per stampare il numero come float
	return out;
}
