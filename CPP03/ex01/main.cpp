#include "ScavTrap.h"

int main()
{
    ClapTrap claptrap("R2-D2");

    std::cout << "Testing ClapTrap" << std::endl;
    claptrap.attack("Guardian Angel");
    claptrap.takeDamage(5);
    claptrap.beRepaired(5);

    std::cout << "\nTesting ScavTrap" << std::endl;
    ScavTrap scavtrap("C-3PO");
    scavtrap.attack("Cerberus");
    scavtrap.takeDamage(50);
    scavtrap.beRepaired(50);
    scavtrap.guardGate();

    std::cout << "\nTesting limit cases" << std::endl;
    claptrap.setEnergyPoints(0);
    claptrap.beRepaired(5);
    claptrap.attack("Guardian Angel");
    claptrap.setHitPoints(0);
    claptrap.beRepaired(5);
    claptrap.attack("Guardian Angel");
    claptrap.takeDamage(5);

    scavtrap.setEnergyPoints(0);
    scavtrap.beRepaired(5);
    scavtrap.attack("Cerberus");
    scavtrap.setHitPoints(0);
    scavtrap.beRepaired(5);
    scavtrap.attack("Cerberus");
    scavtrap.takeDamage(5);

    std::cout << "\nTesting Polymorphism with Virtualization" << std::endl;

    ClapTrap *robots[2];
    robots[0] = new ClapTrap("Wall-E");
    robots[1] = new ScavTrap("Terminator");

    // dinamic polimorphism
    for (int i = 0; i < 2; ++i) {
        robots[i]->attack("a hostile target"); // Resolve at runtime which metod must to be call
    }

    for (int i = 0; i < 2; ++i) {
        delete robots[i];
    }

}
