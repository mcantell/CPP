#ifndef WRONGAnimal_H
# define WRONGAnimal_H

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
                virtual ~WrongAnimal();

                virtual void makeSound( void ) const;
                std::string getType( void ) const;
};

#endif