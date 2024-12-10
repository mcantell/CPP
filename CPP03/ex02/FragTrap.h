#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
    public :
            /* Constructor */
            FragTrap( std::string name );
            /* Copy Constructor */
            FragTrap( const FragTrap& other );
            /* Operator */
            FragTrap& operator=( const FragTrap& other );
            /* Destructor */
            ~FragTrap();

            void highFivesGuys( void );
            void attack( const std::string& target );
};

#endif