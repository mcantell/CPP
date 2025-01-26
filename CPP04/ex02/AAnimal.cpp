#include "AAnimal.h"

AAnimal::AAnimal( void ) : _type("")
{
    std::cout << "AAnimal defaul constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& other )
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=( const AAnimal& other )
{
    std::cout << "AAnimal assigment operator called" << std::endl;
    if ( this != &other )
        this->_type = other._type;
    return *this;
}

AAnimal::~AAnimal( void )
{
    std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound( void ) const 
{
    std::cout << " Generic AAnimal sound in the bush" << std::endl;
}

std::string AAnimal::getType( void ) const
{
    return this->_type;
}