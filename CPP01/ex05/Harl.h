#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <map>
#include <fstream>
#include <string>

class Harl
{
    void    _debug( void );
    void    _info( void );
    void    _warning( void );
    void    _error( void );
    std::map<std::string, void (Harl::*)()> levelMap;

    public:
            /* Constructor */
            Harl();
            /* Copy constructor */
            Harl( const Harl& other );
            /* Operator */
            Harl& operator=( const Harl& other );
            /* Destructor */
            ~Harl();

            void    complain( std::string level );

};

#endif