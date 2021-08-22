#include "Character.hpp"

Character::Character(){
	cout << "Character default constructor called" << endl;
	_name = "noName";
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

Character::Character(string const name){
	_name = name;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	cout << "Character " << _name << " constructor called" << endl;
}

Character::Character(const Character& copy){
	*this = copy;
}

Character::~Character(void){
	cout << "Character destructor called" << endl;
	for (int i = 0; i < 4; i++){
		delete _materia[i];
		_materia[i] = NULL;
	}
}

Character &Character::operator=(const Character& op){
	this->_name = op.getName();
	for (int i = 0; i < 4; i++){
		if (_materia[i] != NULL)
			delete _materia[i];
		_materia[i] = op._materia[i];
	}
	return (*this);
}

string const & Character::getName() const{
	return (_name);
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3 || _materia[idx] == NULL) {
		cout << "Invalide index, unequip not possible" << endl;
		return ;
	}
	_materia[idx] = NULL;
}

void Character::equip(AMateria* m){
	int h = -1;
	for (int i = 0; i < 4; i++) {
		if (_materia[i] == NULL)
			if (h == -1)
				h = i;
	}
	if (h == -1) {
		cout << "Character inventory full, equip not possible" << endl;
		return ;
	}
	_materia[h] = m;
}

void Character::use(int idx, ICharacter& target){
	if (idx < 0 || idx > 3 || _materia[idx] == NULL) {
		cout << "No Materia in this index" << endl;
		return ;
	}
	_materia[idx]->use(target);
}