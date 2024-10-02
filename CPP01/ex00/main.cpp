#include "Zombie.h"

int main(int ac, char **av)
{
    std::string Zombie1;
    std::string Zombie2;
    Zombie* Zombie;

    if (ac <= 1)
    {
        Zombie1 = "SERGIOOOO";
        Zombie2 = "JENNIFEER";
    }

    if (ac == 3)
    {
        Zombie1 = av[1];
        Zombie2 =av[2];
    }

    if (ac > 3)
    {
        std::cerr << "*Error. Too many Zombies*" << std::endl;
    }

    Zombie = newZombie(Zombie1);
    Zombie->announce();
    delete (Zombie);
    randomChump(Zombie2);
    return 0;

}