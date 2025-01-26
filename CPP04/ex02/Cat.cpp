#include "Cat.h"

Cat::Cat( void )
{
    _type = "Cat";
    brain = new Brain();
    std::cout << "Cat default contructor called" << std::endl;
}

Cat::Cat( const Cat& other ) : AAnimal( other )
{
    brain = new Brain(*(other.brain)); // Deep copy the brain
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=( const Cat& other )
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);  // Call base class assignment
        delete brain;  // Free existing brain
        brain = new Brain(*(other.brain));  // Deep copy brain
    }
    return *this;
}

Cat::~Cat( void )
{
    delete brain;
    std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << "The cat go meow" << std::endl;
}

Brain* Cat::getBrain( void ) const
{
    return this->brain;
}
