#include "Dog.h"

Dog::Dog( void )
{
    this->_type = "Dog";
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog& other ) : AAnimal( other )
{
    brain = new Brain(*(other.brain));  // Deep copy the brain
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=( const Dog& other )
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);  // Call base class assignment
        delete brain;  // Free existing brain
        brain = new Brain(*(other.brain));  // Deep copy brain
    }
    return *this;
}

Dog::~Dog( void )
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "The dog goes Woof!" << std::endl;
}

Brain* Dog::getBrain( void ) const
{
    return this->brain;
}
