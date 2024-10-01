#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "Contact.h"

class PhoneBook
{
	static const int	_max_contact = 8;
	Contact				_contact[_max_contact];
	int					_index;

	void			showContact( void ) const;
	void			showDetail( int i ) const;
	public:
			PhoneBook();
			PhoneBook( const PhoneBook& other );
			PhoneBook& operator=( const PhoneBook& other);
			~PhoneBook();

			void	addNewContact( void );
			void	searchContact( void );
			void	exitPhoneBook( void );
};

#endif
