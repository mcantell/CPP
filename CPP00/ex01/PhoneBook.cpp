#include "PhoneBook.h"

PhoneBook::PhoneBook() : _index(0) {}

PhoneBook::PhoneBook( const PhoneBook& other )
{
	this->_index = other._index;
}

PhoneBook&	PhoneBook::operator=( const PhoneBook& other )
{
	if (this != &other)
		this->_index = other._index;
	return *this;
}

PhoneBook::~PhoneBook() {}

static int	is_digit(std::string str)
{
	for ( int i = 0; str[i]; i++)
		if (str[i] < 48 || str[i] > 57)
			return 0;
	return 1;
}


void	PhoneBook::addNewContact( void )
{
	std::string	firstname, lastname, nickname, phonenumber, darkestsecret;

	std::cout << " Enter First Name " << std::endl;
	std::getline(std::cin >> std::ws, firstname);
	if (firstname.empty())
	{
		std::cerr << " Error. First Name cannot be empty " << std::endl;
		return ;
	}

	std::cout << " Enter Last Name " << std::endl;
	std::getline(std::cin >> std::ws, lastname);
	if (lastname.empty())
	{
		std::cerr << " Error. Last Name cannot be empty " << std::endl;
		return ;
	}

	std::cout << " Enter Nickname " << std::endl;
	std::getline(std::cin >> std::ws, nickname);
	if (nickname.empty())
	{
		std::cerr << " Error. Nickname cannot be empty " << std::endl;
		return ;
	}

	std::cout << " Enter Phone Number " << std::endl;
	std::getline(std::cin >> std::ws, phonenumber);
	if (phonenumber.empty())
	{
		std::cerr << " Error, Phone Number cannot be empty " << std::endl;
		return ;
	}
	if (is_digit(phonenumber) == 0)
	{
		std::cerr << " Error. Phone Number must contain only numbers" << std::endl;
		return ;
	}

	std::cout << " Enter Darkest Secret " << std::endl;
	std::getline(std::cin >> std::ws, darkestsecret);
	if (darkestsecret.empty())
	{
		std::cerr << " Error. Darkest Secret cannot be empty" << std::endl;
		return ;
	}

	Contact	newcontact(firstname, lastname, nickname, phonenumber, darkestsecret);

	if (_index < _max_contact)
	{
		_contact[_index] = newcontact;
		_index++;
	}
	else
	{
		for ( int i = 0; i < 7; i++)
			_contact[i] = _contact[i + 1];
		_contact[7] = newcontact;
	}
}

void	PhoneBook::showContact( void ) const
{
	std::cout << "|" << std::setw(10) << std::right << "Index" << "|"
			<< std::setw(10) << std::right << "First Name" << "|"
			<< std::setw(10) << std::right << "Last Name" << "|"
			<< std::setw(10) << std::right << "Nickname" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < _max_contact; i++)
	{
		std::cout << "|" << std::setw(10) << std::right << (i + 1) << "|"
					<< std::setw(10) << std::right << (_contact[i].getFirstName().substr(0, 9)) + (_contact[i].getFirstName().length() > 10 ? "." : "") << "|"
					<< std::setw(10) << std::right << (_contact[i].getLastName().substr(0, 9)) + (_contact[i].getLastName().length() > 10 ? "." : "") << "|"
					<< std::setw(10) << std::right << (_contact[i].getNickname().substr(0, 9)) + (_contact[i].getNickname().length() > 10 ? "." : "") << "|"
					<< std::endl;
	}
}

void	PhoneBook::showDetail( int i ) const
{
	const Contact&	contact = _contact[--i];

	std::cout << "First Name " << contact.getFirstName() << std::endl
			<< "Last Name " << contact.getLastName() << std::endl
			<< "Nickname " << contact.getNickname() << std::endl
			<< "Phone Number " << contact.getPhoneNumber() << std::endl
			<< "Darkest Secret " << contact.getDarkestSecret() << std::endl;
}

void	PhoneBook::searchContact( void )
{
	showContact();

	std::string	str;
	int			i;

	std::cout << "Enter index " << std::endl;
	std::getline(std::cin >> std::ws, str);
	i = atoi(str.c_str());
	if (std::cin.fail() || i < 1 || i > _max_contact)
	{
		std::cerr << " Error in input " << std::endl;
		return ;
	}

	showDetail(i);
}

void	PhoneBook::exitPhoneBook( void )
{
	std::cout << " Exit PhoneBook " << std::endl;
}
