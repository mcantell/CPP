#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
                std::string _type;

    public:
                /* Constructor */
                WrongAnimal( void );
                /* Copy constructor */
                WrongAnimal( const WrongAnimal& other );
                /* Operator */
                WrongAnimal& operator=( const WrongAnimal& other);
                /* Destructor */
                ~WrongAnimal();

                void makeSound( void ) const;
                std::string getType( void ) const;
};

#endif
