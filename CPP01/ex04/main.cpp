#include "searchandreplace.h"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << "./sedisforlosers " << "filename " << "s1 " << "s2" << std::endl;
		return 1;
	}

	const std::string filename = av[1];
	const std::string s1 = av[2];
	const std::string s2 = av[3];

	if (s1.empty() || s2.empty())
	{
		std::cerr << "Strings cannot be empty" << std::endl;
		return 1;
	}

	SandR searchAndReplace(filename, s1, s2);
	searchAndReplace.searchAndReplace();

	return 0;
}
