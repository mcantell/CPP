#include "ClapTrap.h"

ClapTrap::ClapTrap( const std::string& name ) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
	*this = other;
	std::cout << "ClapTrap Copy Constructor colled for " << _name << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& other )
{
	if ( this != &other )
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

std::string ClapTrap::getName() const { return _name; }
void ClapTrap::setName(const std::string& name) { _name = name; }
unsigned int ClapTrap::getHitPoints() const { return _hitPoints; }
void ClapTrap::setHitPoints(unsigned int hitPoints) { _hitPoints = hitPoints; }
unsigned int ClapTrap::getEnergyPoints() const { return _energyPoints; }
void ClapTrap::setEnergyPoints(unsigned int energyPoints) { _energyPoints = energyPoints; }
unsigned int ClapTrap::getAttackDamage() const { return _attackDamage; }
void ClapTrap::setAttackDamage(unsigned int attackDamage) { _attackDamage = attackDamage; }

void	ClapTrap::attack( const std::string& target )
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		--_energyPoints;
		std::cout << "ClapTrap " << _name << " attack " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
	}
	else if (_hitPoints <= 0)
		std::cerr << "ClapTrap " << _name << " cannot attack. Insufficient hit points!" << std::endl;
	else
		std::cerr << "ClapTrap " << _name << " cannot attack. Insufficient energy points!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_hitPoints > 0)
	{
		_hitPoints = (amount >= _hitPoints) ? 0 : _hitPoints - amount;
		std::cout << "ClapTrap " << _name << " take " << amount << " points of damage. Remaining hit points " << _hitPoints << std::endl;
	}
	else
		std::cerr << "ClapTrap " << _name << " is already destroyed" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		--_energyPoints;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repair itself by " << amount << ". Remaining hit points " << _hitPoints << std::endl;
	}
	else if (_hitPoints <= 0)
		std::cerr << "ClapTrap " << _name << " is already destroyed and cannot reapir itself" << std::endl;
	else
		std::cerr << "ClapTrap " << _name << " cannot repair itself. Insufficient energy points!" << std::endl;
}
