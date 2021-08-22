#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	cout << "Cure constructor called" << endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy) {
	*this = copy;
}

Cure::~Cure(void){
	cout << "Cure destructor called" << endl;
}

Cure &Cure::operator=(const Cure& op){
	_type = op.getType();
	return (*this);
}

AMateria* Cure::clone(void) const{
	return new Cure();
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}