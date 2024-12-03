#ifndef SEARCH_AND_REPLACE_H
# define SEARCH_AND_REPLACE_H

#include <iostream>
#include <fstream>
#include <string>

class SandR
{
	std::string _filename;
	std::string _s1;
	std::string _s2;

	public:
			/* Constructor */
			SandR( const std::string &filename, const std::string &s1, const std::string &s2 );
			/* Copy constructor */
			SandR( const SandR& other );
			/* Operator */
			SandR& operator=( const SandR& other );
			/* Destructor */
			~SandR();

			void	searchAndReplace() const;
};

#endif
