#include "Bureaucrat.h"

int main() {
    // Test constructors
    std::cout << "--- Testing constructors ---" << std::endl;
    try {
        Bureaucrat default_bureaucrat;
        std::cout << default_bureaucrat << std::endl;
        
        Bureaucrat bob("Bob", 75);
        std::cout << bob << std::endl;
        
        Bureaucrat copy_bob(bob);
        std::cout << copy_bob << std::endl;
        
        Bureaucrat assignment;
        assignment = bob;
        std::cout << assignment << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    // Test invalid grade (too high)
    std::cout << "\n--- Testing grade too high ---" << std::endl;
    try {
        Bureaucrat toohigh("Too High", 0);
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    // Test invalid grade (too low)
    std::cout << "\n--- Testing grade too low ---" << std::endl;
    try {
        Bureaucrat toolow("Too Low", 151);
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    // Test increment/decrement
    std::cout << "\n--- Testing increment/decrement ---" << std::endl;
    try {
        Bureaucrat clerk("John", 5);
        std::cout << clerk << std::endl;
        
        clerk.incrementGrade();
        std::cout << "After increment: " << clerk << std::endl;
        
        clerk.decrementGrade();
        std::cout << "After decrement: " << clerk << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    // Test boundaries
    std::cout << "\n--- Testing boundaries ---" << std::endl;
    try {
        Bureaucrat top("Top", 1);
        std::cout << top << std::endl;
        std::cout << "Trying to increment beyond limit..." << std::endl;
        top.incrementGrade(); // Should throw exception
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat bottom("Bottom", 150);
        std::cout << bottom << std::endl;
        std::cout << "Trying to decrement beyond limit..." << std::endl;
        bottom.decrementGrade(); // Should throw exception
    }
    catch (std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}