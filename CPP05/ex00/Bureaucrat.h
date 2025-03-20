#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat {
private:
    const std::string _name;
    int _grade; // 1 (highest) to 150 (lowest)

public:
    // Orthodox Canonical Form requirements
    Bureaucrat();                                   // Default constructor
    Bureaucrat(const std::string& name, int grade); // Parameterized constructor
    Bureaucrat(const Bureaucrat& other);            // Copy constructor
    Bureaucrat& operator=(const Bureaucrat& other); // Copy assignment operator
    ~Bureaucrat();                                  // Destructor

    // Getters
    std::string getName() const;
    int getGrade() const;

    // Grade modification methods
    void incrementGrade();
    void decrementGrade();

    // Exception classes
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

// Insertion operator overload
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif