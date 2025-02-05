#include "WrongAnimal.h"

WrongAnimal::WrongAnimal( void ) : _type("")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& other )
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

std::string WrongAnimal::getType( void ) const
{
    return this->_type;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "Hello there" << std::endl;
}
