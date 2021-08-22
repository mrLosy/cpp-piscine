#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {

private:
		string _type;

public:
		Dog();
		Dog(string type);
		Dog(const Dog &copy);
		~Dog();

		Dog &operator=(const Dog& op);

		void makeSound() const;
};

#endif