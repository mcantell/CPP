#include "Harl.h"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage: " << av[0] << " <log_level>" << std::endl;
		return 1;
	}

	std::string level = av[1];
	Harl harl;
	harl.complain(level);
}
