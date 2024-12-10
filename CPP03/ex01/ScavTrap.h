#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
    public :
            /* Constructor */
            ScavTrap( const std::string name );
            /* Copy constructor */
            ScavTrap( const ScavTrap& other );
            /* Operator */
            ScavTrap& operator=( const ScavTrap& other );
            /* Destructor */
            ~ScavTrap();

            void guardGate();
            void attack(const std::string& target);
};

#endif 