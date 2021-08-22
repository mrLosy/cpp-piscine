#include "Dog.hpp"

Dog::Dog() : Animal(){
	cout << "Dog default constructor called" << endl;
}

Dog::Dog(string type) : Animal(type){
	cout << "Dog default constructor called" << endl;
	_type = type;
}

Dog::Dog(const Dog& copy){
	*this = copy;
}

Dog &Dog::operator=(const Dog& op){
	this->_type = op._type;
	return (*this);
}

Dog::~Dog(){
	cout << "Dog default destructor called" << endl;
}

void Dog::makeSound() const{
	cout << "Woof" << endl;
}