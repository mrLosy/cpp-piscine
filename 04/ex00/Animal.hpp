#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "string"
#include "iostream"

using std::cout;
using std::endl;
using std::string;

class Animal{

protected:
		string _type;

public:
		Animal();
		Animal(string type);
		Animal(const Animal &copy);
		virtual ~Animal();

		Animal &operator=(const Animal& op);

		string getType() const;
		virtual void makeSound() const;
};

#endif