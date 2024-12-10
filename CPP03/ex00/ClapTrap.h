#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	std::string 	_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

	public:
			/* Constructor */
			ClapTrap( const std::string& name );
			/* Copy constructor */
			ClapTrap( const ClapTrap& other );
			/* Operator */
			ClapTrap& operator=( const ClapTrap& other );
			/* Desctructor */
			~ClapTrap();

			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			
			std::string getName() const;
			void setName(const std::string& name);
			unsigned int getHitPoints() const;
			void setHitPoints(unsigned int hitPoints);
			unsigned int getEnergyPoints() const;
			void setEnergyPoints(unsigned int energyPoints);
			unsigned int getAttackDamage() const;
			void setAttackDamage(unsigned int attackDamage);
};

#endif
