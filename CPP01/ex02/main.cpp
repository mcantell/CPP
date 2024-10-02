#include <iostream>

int main()
{
    // Inizializzazione della stringa
    std::string brain = "HI THIS IS BRAIN";

    // Definizione di un puntatore alla stringa
    std::string* stringPTR = &brain;

    // Definizione di un riferimento alla stringa
    std::string& stringREF = brain;

    // Stampa degli indirizzi di memoria
    std::cout << "Memory *address* of the string variable: " << &brain << std::endl;
    std::cout << "Memory *address* held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory *address* held by stringREF: " << &stringREF << std::endl;

    // Stampa dei valori
    std::cout << "*Value* of the string variable: " << brain << std::endl;
    std::cout << "*Value* pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "*Value* pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
