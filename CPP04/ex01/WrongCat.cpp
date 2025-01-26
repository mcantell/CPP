#include "WrongCat.h"

WrongCat::WrongCat( void ) 
{
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl; 
}

WrongCat::WrongCat( const WrongCat& other ) : WrongAnimal( other )
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=( const WrongCat& other )
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return *this;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat default destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "Wrong Meow" << std::endl;
}