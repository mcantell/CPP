#include "ClapTrap.h"

int main()
{
    ClapTrap claptrap("R2-D2");

    std::cout << "Testing attack" << std::endl;
    claptrap.attack("Handsome Jack");

    std::cout << "\nTesting take damage" << std::endl;
    claptrap.takeDamage(5);

    std::cout << "\nTesting rapaire" << std::endl;
    claptrap.beRepaired(5);

    std::cout << "\nTesting limit cases" << std::endl;
    claptrap.setEnergyPoints(0);
    claptrap.beRepaired(5);
    claptrap.attack("Handsome Jack");
    claptrap.setHitPoints(0);
    claptrap.beRepaired(5);
    claptrap.attack("Handsome Jack");
    claptrap.takeDamage(5);

    return 0;    
}