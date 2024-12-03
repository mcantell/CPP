#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.h"

class HumanB
{
	std::string _name;
	Weapon* _weapon;

	public:
			/* Constructor */;
			HumanB( const std::string &name );
			/* Copy constructor */
			HumanB( const HumanB& other );
			/* Operator */
			HumanB& operator=( const HumanB& other );
			/* Destructor */
			~HumanB();

			void	attack() const;
			void	setWeapon( Weapon& weapon );
};

#endif
