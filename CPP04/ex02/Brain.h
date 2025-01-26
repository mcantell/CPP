#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
    private:
            std::string ideas[100];
    public:
            /* Constructor */
            Brain();
            /* Copy constructor */
            Brain( const Brain &other );
            /* Operator */
            Brain& operator = ( const Brain &other );
            /* Destructor */
            ~Brain();

            std::string getIdea(int index) const;
            void setIdea(int index, const std::string& idea);
};

#endif