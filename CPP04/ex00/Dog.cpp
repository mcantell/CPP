#include "Dog.h"

Dog::Dog( void )
{
    this->_type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog& other ) : Animal( other )
{
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "The dog go Woof!" << std::endl;
}
