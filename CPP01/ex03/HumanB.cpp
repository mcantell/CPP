#include "HumanB.h"

HumanB::HumanB( const std::string &name ) : _name(name), _weapon(NULL) {}

HumanB::HumanB( const HumanB& other) : _name(other._name), _weapon(other._weapon) {}

HumanB& HumanB::operator=( const HumanB& other )
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_weapon = other._weapon;
	}
	return *this;
}

HumanB::~HumanB() {}

void	HumanB::setWeapon( Weapon& weapon )
{
    _weapon = &weapon;
}

void	HumanB::attack() const
{
	if ( _weapon )
		std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
	else
		std::cerr << _name << " has no weapon to attack the enemy! " << std::endl;
}
