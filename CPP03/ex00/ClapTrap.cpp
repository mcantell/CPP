#include "ClapTrap.h"

ClapTrap::ClapTrap( const std::string& name ) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}
