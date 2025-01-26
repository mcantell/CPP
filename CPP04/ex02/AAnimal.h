#ifndef AAnimal_H
# define AAnimal_H

#include <iostream>
#include <string>

class AAnimal
{
    protected:
                std::string _type;
    
    public:
                /* Constructor */
                AAnimal( void );
                /* Copy constructor */ 
                AAnimal( const AAnimal& other );
                /* Operator */
                AAnimal& operator=( const AAnimal& other);
                /* Destructor */
                virtual ~AAnimal();

                virtual void makeSound( void ) const = 0;
                std::string getType( void ) const;
};

#endif 