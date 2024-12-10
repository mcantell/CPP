#include "ScavTrap.h"
#include "FragTrap.h"

int main() 
{
    // Testing ClapTrap
    ClapTrap claptrap("R2-D2");
    std::cout << "Testing ClapTrap" << std::endl;
    claptrap.attack("Guardian Angel");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);

    // Testing ScavTrap
    std::cout << "\nTesting ScavTrap" << std::endl;
    ScavTrap scavtrap("C-3PO");
    scavtrap.attack("Cerberus");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(50);
    scavtrap.guardGate();

    // Testing FragTrap
    std::cout << "\nTesting FragTrap" << std::endl;
    FragTrap fragtrap("WALL-E");
    fragtrap.attack("Berserk Monster");
    fragtrap.takeDamage(30);
    fragtrap.beRepaired(30);
    fragtrap.highFivesGuys();

    // Testing copy constructor and assignment operator
    std::cout << "\nTesting copy constructor and assignment operator" << std::endl;
    FragTrap fragtrapCopy(fragtrap);  // Test the copy constructor
    FragTrap fragtrapAssigned("Temp");
    fragtrapAssigned = fragtrap;      // Test the assignment operator

    // Testing limit cases
    std::cout << "\nTesting limit cases" << std::endl;
    claptrap.setEnergyPoints(0);
    claptrap.beRepaired(5);
    claptrap.attack("Guardian Angel");
    claptrap.setHitPoints(0);
    claptrap.beRepaired(5);
    claptrap.attack("Guardian Angel");

    scavtrap.setEnergyPoints(0);
    scavtrap.beRepaired(5);
    scavtrap.attack("Cerberus");
    scavtrap.setHitPoints(0);
    scavtrap.beRepaired(5);
    scavtrap.attack("Cerberus");

    fragtrap.setEnergyPoints(0);
    fragtrap.beRepaired(5);
    fragtrap.attack("Berserk Monster");
    fragtrap.setHitPoints(0);
    fragtrap.beRepaired(5);
    fragtrap.attack("Berserk Monster");

}