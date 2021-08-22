#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	cout << "WrongAnimal default constructor called" << endl;
}

WrongAnimal::WrongAnimal(string type){
	cout << "WrongAnimal default constructor called" << endl;
	_type = type;
}

WrongAnimal::~WrongAnimal(){
	cout << "WrongAnimal destructor called" << endl;
}

string WrongAnimal::getType(void) const {
	return (_type);
}

void WrongAnimal::makeSound() const{
	cout << "???" << endl;
}
