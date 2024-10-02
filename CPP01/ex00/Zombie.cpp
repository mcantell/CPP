#include "Zombie.h"

Zombie::Zombie() : _name("") {}

Zombie::Zombie( const Zombie& other )
{
    this->_name = other._name;
}

Zombie& Zombie::operator=( const Zombie& other )
{
    if (this != &other)
        this->_name = other._name;
    return *this;
}

Zombie::~Zombie()
{
    std::cout << " Destructor colled for Zombie "  << this->_name << std::endl;
}

const   std::string    Zombie::getName( void ) const
{
    return  _name;
}

void    Zombie::setName( std::string& name )
{
    _name = name;
}

void    Zombie::announce( void )
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}