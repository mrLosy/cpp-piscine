#include "Brain.hpp"

Brain::Brain(){
	cout << "Brain default constructor called" << endl;
}

Brain::~Brain(){
	cout << "Brain default destructor called" << endl;
}

Brain::Brain(const Brain& copy){
	*this = copy;
}

Brain &Brain::operator=(const Brain& op){
	for (int i = 0; i < 101; i++)
		this->_brain[i] = op._brain[i];
	return (*this);
}

void Brain::setBrain(string *brain){
	for (int i = 0; i < 101; i++)
		this->_brain[i] = brain[i];
}

string * Brain::getBrain(void){
	return (_brain);
}