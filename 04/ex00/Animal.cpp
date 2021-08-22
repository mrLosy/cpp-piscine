#include "Animal.hpp"

Animal::Animal(){
	cout << "Animal default constructor called" << endl;
}

Animal::Animal(string type){
	cout << "Animal default constructor called" << endl;
	_type = type;
}

Animal::Animal(const Animal& copy){
	*this = copy;
}

Animal &Animal::operator=(const Animal& op){
	this->_type = op._type;
	return (*this);
}

Animal::~Animal(){
	cout << "Animal destructor called" << endl;
}

string Animal::getType(void) const {
	return (_type);
}

void Animal::makeSound() const{
	cout << "???" << endl;
}
