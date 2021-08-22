#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal(){
	cout << "WrongCat default constructor called" << endl;
}

WrongCat::WrongCat(string type) : WrongAnimal(type){
	cout << "WrongCat default constructor called" << endl;
	_type = type;
}

WrongCat::~WrongCat(){
	cout << "WrongCat default destructor called" << endl;
}

void WrongCat::makeSound() const{
	cout << "Meow" << endl;
}