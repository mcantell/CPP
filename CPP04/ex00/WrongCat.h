#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
    public:
        /* Constructor */
        WrongCat( void );
        /* Copy Constructor */
        WrongCat( const WrongCat& other );
        /* Operator */
        WrongCat& operator=( const WrongCat& other );
        /* Destructor */
        ~WrongCat();

        void makeSound( void ) const;
};

#endif