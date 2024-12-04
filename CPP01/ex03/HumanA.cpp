#include "HumanA.h"

HumanA::HumanA( const std::string &name, Weapon& weapon ) : _name(name), _weapon(weapon) {}

HumanA::HumanA( const HumanA& other) : _name(other._name), _weapon(other._weapon) {}

HumanA& HumanA::operator=( const HumanA& other )
{
	if (this != &other)
		this->_name = other._name;
	return *this;
}

HumanA::~HumanA() {}

void	HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
