#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
    protected:
                std::string _type;
    
    public:
                /* Constructor */
                Animal( void );
                /* Copy constructor */ 
                Animal( const Animal& other );
                /* Operator */
                Animal& operator=( const Animal& other);
                /* Destructor */
                virtual ~Animal();

                virtual void makeSound( void ) const;
                std::string getType( void ) const;
};

#endif 