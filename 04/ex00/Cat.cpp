#include "Cat.hpp"

Cat::Cat() : Animal(){
	cout << "Cat default constructor called" << endl;
}

Cat::Cat(string type) : Animal(type){
	cout << "Cat default constructor called" << endl;
	_type = type;
}

Cat::~Cat(){
	cout << "Cat default destructor called" << endl;
}

Cat::Cat(const Cat& copy){
	*this = copy;
}

Cat &Cat::operator=(const Cat& op){
	this->_type = op._type;
	return (*this);
}

void Cat::makeSound() const{
	cout << "Meow" << endl;
}