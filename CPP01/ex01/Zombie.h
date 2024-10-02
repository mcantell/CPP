#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Zombie
{
    std::string _name;

    public :
                /* Costructor */
                Zombie();
                /* copy costructor */
                Zombie( const Zombie& other );
                /* operatror*/
                Zombie& operator=( const Zombie& other );
                ~Zombie();

                const std::string   getName( void ) const;
                void    setName( std::string& name );
                void    announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif