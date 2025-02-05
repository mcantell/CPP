#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int	main(void)
{
	std::cout << "=== Testing Animal Polymorphism ===" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << "j type: " << j->getType() << std::endl;
	std::cout << "i type: " << i->getType() << std::endl;

	std::cout << "\nSounds:" << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	std::cout << "\nCleanup:" << std::endl;
	delete j;
	delete i;
	delete meta;

	std::cout << "\n=== Testing Wrong Animal ===" << std::endl;
	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();

	std::cout << "\nTypes:" << std::endl;
	std::cout << "wrong_cat type: " << wrong_cat->getType() << std::endl;

	std::cout << "\nSounds:" << std::endl;
	wrong_cat->makeSound();  // Will make WrongAnimal sound
	wrong_meta->makeSound();

	std::cout << "\nCleanup:" << std::endl;
	delete wrong_cat;
	delete wrong_meta;

	return 0;
}
