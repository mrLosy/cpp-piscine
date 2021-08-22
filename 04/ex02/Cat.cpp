#include "Cat.hpp"

Cat::Cat() : Animal(){
	cout << "Cat default constructor called" << endl;
	_brain = new Brain();
}

Cat::Cat(string type) : Animal(type){
	cout << "Cat constructor called" << endl;
	_type = type;
	_brain = new Brain();
}

Cat::~Cat(){
	delete _brain;
	cout << "Cat default destructor called" << endl;
}

Cat::Cat(const Cat& copy){
	this->_brain = new Brain(*copy._brain);
	*this = copy;
}

Cat &Cat::operator=(const Cat& op){
	delete this->_brain;
	this->_type = op._type;
	this->_brain = new Brain(*op._brain);
	this->_brain->setBrain(op._brain->getBrain());
	return (*this);
}

void Cat::makeSound() const{
	cout << "Meow" << endl;
}
