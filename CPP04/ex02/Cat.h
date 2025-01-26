#ifndef CAT_H
# define CAT_H

#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal
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