#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>

class Weapon
{
	std::string	_type;

	public:
			/* Constructor */
			Weapon( const std::string &type );
			/* Copy constructor */
			Weapon( const Weapon& other );
			/* Operator */
			Weapon& operator=( const Weapon& other );
			/* Destructor */
			~Weapon();

			const std::string& getType() const;
			void setType( const std::string &newType );
};

#endif
