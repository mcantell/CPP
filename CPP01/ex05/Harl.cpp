#include "Harl.h"

Harl::Harl() {}

Harl::Harl( const Harl& other )
{
    *this = other;
}

Harl&   Harl::operator=( const Harl& other )
{
    ( void )other;
    return *this;
}

Harl::~Harl() {}

void    Harl::_debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::_info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::_warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::_error()
{
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain( std::string level )
{
    std::string newLevel[] = { "DEBUG", "INFO", "ERROR", "WARNING"};

    void    (Harl::*pointertofunction[])(void) =
    {
        &Harl::_debug,
        &Harl::_warning,
        &Harl::_info,
        &Harl::_error
    };
    
    for ( int i = 0; i < 4; i++)
    {
        if (level == newLevel[i])
        {
            (this->*pointertofunction[i])();
            return ;
        }
    }

    std::cerr << "Unknown level: " << level << std::endl;
}