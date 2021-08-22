#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	cout << "Ice constructor called" << endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy) {
	*this = copy;
}

Ice::~Ice(void){
	cout << "Ice destructor called" << endl;
}

Ice &Ice::operator=(const Ice& op){
	_type = op.getType();
	return (*this);
}

AMateria* Ice::clone(void) const{
	return new Ice();
}

void Ice::use(ICharacter& target) {
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}