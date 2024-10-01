#include <iostream>
#include <cctype>

std::string ft_toupper(std::string str)
{
    std::string str_upper;

    for (size_t i = 0; i < str.length(); i++)
        str_upper += (char)std::toupper(str[i]);
    return (str_upper);
}

int main(int ac, char **av)
{
    std::string result;

    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int i = 1; i < ac; i++)
            {
                result = ft_toupper(av[i]);
                std::cout << result;
                if (i < ac - 1)
                    std::cout << " ";
            }
            std::cout << std::endl;
    }
    return (0);
}


