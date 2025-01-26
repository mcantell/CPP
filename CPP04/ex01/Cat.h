#ifndef CAT_H
# define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal
{
            Brain* brain;

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
            Brain* getBrain( void ) const;
};

#endif