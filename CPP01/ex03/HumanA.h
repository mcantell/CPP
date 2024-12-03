#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.h"

class HumanA
{
	std::string _name;
	Weapon& _weapon;

	public:
			/* Constructor */
			HumanA( const std::string &name, Weapon& weapon );
			/* Copy constructor */
			HumanA( const HumanA& other );
			/* Operator */
			HumanA& operator=( const HumanA& other );
			/* Destructor */
			~HumanA();

			void	attack() const;
};


#endif
