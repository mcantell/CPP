#include "Zombie.h"

int main(int ac, char **av)
{
    int N;
    Zombie* horde;
    std::string name;

    if (ac != 3)
    {
        std::cerr << "*Error. You must enter the number of zombies and the name of the zombie horde.*" << std::endl;
        return 1;
    }

    if (av[1])
        N = atoi(av[1]);

    if (N <= 0)
    {
        std::cerr << "*Give me a valid namber of zombies*" << std::endl;
        return 1;
    }

    if (N >100)
    {
        std::cerr << "*Give me less zombies*" << std::endl;
        return 1;
    }

    if (av[2])
        name = av[2];
    if(name.empty())
    {
        std::cerr << "*Give a valid name to the zombie horde.*" << std::endl;
        return 1;
    }
    if (name.length() >= 20)
    {
        std::cerr << "*Give a neme with less than 20 character*" << std::endl;
        return 1;
    }
    horde = zombieHorde(N, name);

    for ( int i = 0; i < N; i++)
    {
        std::cout << i + 1 << " :";
        horde[i].announce();
    }

    delete [] horde;

    return 0;
}
