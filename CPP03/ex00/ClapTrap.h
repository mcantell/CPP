#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	std::string 	_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;

	public:
			/* Constructor */
			ClapTrap( const std::string& name );
			/* Copy constructor */
			ClapTrap( const ClapTrap& other );
			/* Operator */
			ClapTrap operator=( const ClapTrap& other );
			/* Desctructor */
			~ClapTrap();

			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};


#endif
