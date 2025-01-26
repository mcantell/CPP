#ifndef DOG_H
# define DOG_H

#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal
{
            Brain* brain;
    public:
            /* Constructor */
            Dog( void );
            /* Copy Constructor */
            Dog( const Dog& other );
            /* Operator */
            Dog& operator=( const Dog& other );
            /* Destructor */
            ~Dog();

            void makeSound( void ) const;
            Brain* getBrain( void ) const;
};

#endif