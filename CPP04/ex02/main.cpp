#include "AAnimal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

void testAAnimalPolymorphism() {
    std::cout << "=== AAnimal Polymorphism Test ===" << std::endl;
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    std::cout << "Dog type: " << dog->getType() << std::endl;
    std::cout << "Cat type: " << cat->getType() << std::endl;

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;
}

void testWrongAAnimalPolymorphism() {
    std::cout << "\n=== Wrong AAnimal Polymorphism Test ===" << std::endl;
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;
    wrongCat->makeSound();

    delete wrongCat;
}

void testDeepCopy() {
    std::cout << "\n=== Deep Copy Test ===" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->setIdea(0, "I want to play fetch!");
    originalDog.getBrain()->setIdea(1, "Treats are awesome!");

    Dog copiedDog(originalDog);

    std::cout << "Original Dog Ideas:" << std::endl;
    std::cout << "Idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << originalDog.getBrain()->getIdea(1) << std::endl;

    std::cout << "Copied Dog Ideas:" << std::endl;
    std::cout << "Idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Idea 1: " << copiedDog.getBrain()->getIdea(1) << std::endl;

    // Modify copied dog's ideas to show independence
    copiedDog.getBrain()->setIdea(0, "I want to sleep!");
    
    std::cout << "\nAfter modifying copied dog:" << std::endl;
    std::cout << "Original Dog Idea 0: " << originalDog.getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog Idea 0: " << copiedDog.getBrain()->getIdea(0) << std::endl;
}

void testAssignmentOperator() {
    std::cout << "\n=== Assignment Operator Test ===" << std::endl;
    Cat cat1;
    cat1.getBrain()->setIdea(0, "I love sunbathing");

    Cat cat2;
    cat2 = cat1;  // Test assignment operator

    std::cout << "Cat1 Idea: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "Cat2 Idea: " << cat2.getBrain()->getIdea(0) << std::endl;
}

int main() {
    testAAnimalPolymorphism();
    testWrongAAnimalPolymorphism();
    testDeepCopy();
    testAssignmentOperator();

    return 0;
}