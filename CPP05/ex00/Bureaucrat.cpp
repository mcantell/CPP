#include "Bureaucrat.h"

// Orthodox Canonical Form implementations
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name) {
    std::cout << "Parameterized constructor called" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
    std::cout << "Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        // We can't assign to _name since it's const, only grade can be assigned
        _grade = other._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Destructor called" << std::endl;
}

// Getters
std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

// Grade modification methods
void Bureaucrat::incrementGrade() {
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

// Exception implementations
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high! It must be between 1 and 150.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low! It must be between 1 and 150.";
}

// Insertion operator overload implementation
std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}