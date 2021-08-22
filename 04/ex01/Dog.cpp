#include "Dog.hpp"

Dog::Dog() : Animal(){
	cout << "Dog default constructor called" << endl;
	_brain = new Brain();
}

Dog::Dog(string type) : Animal(type){
	cout << "Dog constructor called" << endl;
	_brain = new Brain();
	_type = type;
}

Dog::Dog(const Dog& copy){
	*this = copy;
}

Dog &Dog::operator=(const Dog& op){
	this->_type = op._type;
	this->_brain = new Brain;
	this->_brain->setBrain(op._brain->getBrain());
	return (*this);
}

Dog::~Dog(){
	delete _brain;
	cout << "Dog default destructor called" << endl;
}

void Dog::makeSound() const{
	cout << "Woof" << endl;
}