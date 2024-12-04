#include "Harl.h"

int main()
{
    Harl h;

    // Testing different complaint levels
    std::cout << "Testing DEBUG level:" << std::endl;
    h.complain("DEBUG");

    std::cout << "\nTesting INFO level:" << std::endl;
    h.complain("INFO");

    std::cout << "\nTesting WARNING level:" << std::endl;
    h.complain("WARNING");

    std::cout << "\nTesting ERROR level:" << std::endl;
    h.complain("ERROR");

    // Testing an unknown level
    std::cout << "\nTesting unknown level:" << std::endl;
    h.complain("UNKNOWN");

    return 0;
}