#include "Animal.h"

Animal::Animal( void ) : _type("")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const Animal& other )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

Animal& Animal::operator=( const Animal& other )
{
    std::cout << "Animal assigment operator called" << std::endl;
    if ( this != &other )
        this->_type = other._type;
    return *this;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound( void ) const
{
    std::cout << " Generic animal sound in the bush" << std::endl;
}

std::string Animal::getType( void ) const
{
    return this->_type;
}
