#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal("Animal");
	const Animal* j = new Dog("Dog");
	const Animal* i = new Cat("Cat");

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();


	const WrongAnimal* meta_wrong = new WrongAnimal("Animal");
	const WrongAnimal* i_wrong = new WrongCat("Cat");

	i_wrong->makeSound();
	meta_wrong->makeSound();
}