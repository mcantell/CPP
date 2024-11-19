#include "PhoneBook.h"

static int	Command( std::string& str)
{
	if (str == "ADD")
		return 1;
	else if (str == "SEARCH")
		return 2;
	else if (str == "EXIT")
		return 3;
	else
		return 0;
}

int	main()
{
	PhoneBook	phoneBook;
	std::string	str;

	while (1)
	{
		std::cout << " Enter a command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, str);

		if (std::cin.eof()) {
			std::cout << "End of input detected. Exiting..." << std::endl;
			break;
		}
		if (str.empty())
		{
			std::cerr << " Error. Command cannot be empty " << std::endl;
			break ;
		}

		switch (Command(str))
		{
			case (1):
				phoneBook.addNewContact();
				break ;
			case (2):
				phoneBook.searchContact();
				break ;
			case (3):
				phoneBook.exitPhoneBook();
				return 0;
			default:
				std::cerr << " Enter a valid command " << std::endl;
				break ;
		}
	}
	return 0;
}
