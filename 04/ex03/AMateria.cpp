#include "AMateria.hpp"

AMateria::AMateria(){
	_type = "empty";
}

AMateria::AMateria(string const & type){
	_type = type;
	cout << "AMateria " << _type << " constructor called" << endl;
}

AMateria::AMateria(const AMateria& copy){
	*this = copy;
}

AMateria::~AMateria(void){
	cout << "AMateria destructor called" << endl;
}

AMateria &AMateria::operator=(const AMateria& op){
	this->_type = op.getType();
	return (*this);
}

string const & AMateria::getType() const{
	return (_type);
}

void AMateria::use(ICharacter& target){
	cout << "* uses an " << _type << " at " << target.getName() << " *" << endl;
}