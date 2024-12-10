#include "FragTrap.h"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    std::cout << "FragTrap " << _name << " Copy Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) 
{
    if (this != &other) 
    {
        ClapTrap::operator=(other);
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
        std::cout << "FragTrap " << _name << " Assignment Operator called" << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap destructor called" << std::endl;
}


void FragTrap::highFivesGuys(void) 
{
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}

void FragTrap::attack(const std::string& target) 
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        --_energyPoints;
        std::cout << "FragTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } 
    else if (_hitPoints <= 0)
        std::cerr << "FragTrap " << _name << " cannot attack. Insufficient hit points!" << std::endl;
    else
        std::cerr << "FragTrap " << _name << " cannot attack. Insufficient energy points!" << std::endl;
}