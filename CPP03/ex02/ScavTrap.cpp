#include "ScavTrap.h"

ScavTrap::ScavTrap( const std::string name ) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor calloed for " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& other )
{
    if ( this != &other )
        ClapTrap::operator=(other);
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack( const std::string& target)
{
    if ( _hitPoints > 0 && _energyPoints > 0)
    {
        --_energyPoints;
        std::cout << "ScavTrap " << _name << " ferociously attack " << target << " causing " << _attackDamage << " points of damage" << std::endl;
    }
    else if (_hitPoints <= 0)
        std::cerr << "ScavTrap " << _name << " cannot attack. Insufficient hit points!" << std::endl;
    else
        std::cerr << "ScavTrap " << _name << " cannot attack. Insufficient energy points!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}