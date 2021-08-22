#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	cout << "MateriaSource default constructor called" << endl;
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy){
	*this = copy;
}

MateriaSource::~MateriaSource(void){
	for (int i = 0; i < 4; i++){
		if (_materia[i] != NULL){
			// delete _materia[i];
			_materia[i] = NULL;
		}
	}
	cout << "MateriaSource destructor called" << endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& op){
	for (int i = 0; i < 4; i++){
		if (_materia[i] != NULL){
			delete _materia[i];
			_materia[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (op._materia[i] == NULL)
			_materia[i] = NULL;
		else
			_materia[i] = op._materia[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m){
	int idx = - 1;
	for (int i = 0; i < 4; i++) {
		if (_materia[i] == NULL)
			if (idx == -1)
					idx = i;
	}
	if (idx == -1) {
		cout << "MateriaSource inventory full, equip not possible" << endl;
		return ;
	}
	_materia[idx] = m;
}

AMateria* MateriaSource::createMateria(string const & type){
	for(int i = 0; i < 4; i++)
		if (_materia[i] != NULL && _materia[i]->getType() == type)
			return (_materia[i]);
	cout << "Materia type not found" << endl;
	return (NULL);		
}