#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iomanip>
#include <string>
#include <iostream>

class   Zombie
{
    std::string _name;

    public :
            /* Costructor */
            Zombie();
            /* Copy Costructor */
            Zombie( const Zombie& other );
            /* Operator */
            Zombie& operator=( const Zombie& other );
            /* Destructor*/
            ~Zombie();
            
            void announce( void );
            const std::string   getName( void ) const;
            void                setName( std::string& name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif