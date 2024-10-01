#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact
{
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;
	public:
		Contact();
		Contact( const std::string& first_name, const std::string& last_name,
				const std::string& nickname, const std::string& phone_number,
				const std::string& darkest_secret);
		Contact( const Contact& other );
		Contact& operator=( const Contact& other);
		~Contact();
		const std::string	getFirstName( void ) const;
		const std::string	getLastName( void ) const;
		const std::string	getNickname( void ) const;
		const std::string	getPhoneNumber( void ) const;
		const std::string	getDarkestSecret( void ) const;

};

#endif
