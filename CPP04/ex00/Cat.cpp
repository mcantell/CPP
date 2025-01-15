#include "Cat.h"

Cat::Cat( void )
{
    _type = "Cat";
    std::cout << "Cat default contructor called" << std::endl;
}

Cat::Cat( const Cat& other ) : Animal( other )
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

Cat::~Cat( void )
{
    std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << "The cat go meow" << std::endl;
}
