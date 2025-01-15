#ifndef CAT_H
# define CAT_H

#include "Animal.h"

class Cat
{
    public:
            /* Constructor */
            Cat( void );
            /* Copy Constructor */
            Cat( const Cat& other );
            /* Operator */
            Cat& operator=( const Cat& other );
            /* Destructor */
            ~Cat();

            void makeSound( void ) const;
};

#endif